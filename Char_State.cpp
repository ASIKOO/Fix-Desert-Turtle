Cerca:

			if (GetRaceNum() == 2191 && number(1, 20) == 1 && get_dword_time() - m_pkMobInst->m_dwLastWarpTime > 1000)
			{
				
				float fx, fy;
				GetDeltaByDegree(victim->GetRotation(), 400, &fx, &fy);
				long new_x = victim->GetX() + (long)fx;
				long new_y = victim->GetY() + (long)fy;
				SetRotation(GetDegreeFromPositionXY(new_x, new_y, victim->GetX(), victim->GetY()));
				Show(victim->GetMapIndex(), new_x, new_y, 0, true);
				GotoState(m_stateBattle);
				m_dwStateDuration = 1;
				ResetMobSkillCooltime();
				m_pkMobInst->m_dwLastWarpTime = get_dword_time();
				return;
			}

Modifica con:

//			if (GetRaceNum() == 2191 && number(1, 20) == 1 && get_dword_time() - m_pkMobInst->m_dwLastWarpTime > 1000)
//			{
//				
//				float fx, fy;
//				GetDeltaByDegree(victim->GetRotation(), 400, &fx, &fy);
//				long new_x = victim->GetX() + (long)fx;
//				long new_y = victim->GetY() + (long)fy;
//				SetRotation(GetDegreeFromPositionXY(new_x, new_y, victim->GetX(), victim->GetY()));
//				Show(victim->GetMapIndex(), new_x, new_y, 0, true);
//				GotoState(m_stateBattle);
//				m_dwStateDuration = 1;
//				ResetMobSkillCooltime();
//				m_pkMobInst->m_dwLastWarpTime = get_dword_time();
//				return;
//			}

O più semplicemente commenta il tutto.
