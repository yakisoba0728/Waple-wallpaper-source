// Function: FUN_1400e5340
// Addr: 1400e5340
// Size: 3 bytes


ushort FUN_1400e5340(longlong param_1,undefined1 *param_2,undefined1 *param_3,char param_4)

{
  undefined1 *puVar1;
  char cVar2;
  char cVar3;
  ushort uVar4;
  ushort uVar5;
  ulonglong uVar6;
  
  uVar6 = 0;
  if (PTR_u_m_gtc_matrix_access_inl_140486aa0_0x48_140486d10 != (undefined *)0x0) {
    do {
      puVar1 = param_2;
      if ((longlong)param_3 - (longlong)param_2 ==
          (ulonglong)*(uint *)(&UNK_140486d20 + uVar6 * 0x18)) {
        while( true ) {
          if (puVar1 == param_3) goto code_r0x0001400e5414;
          cVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0x20))
                            (*(longlong **)(param_1 + 8),*puVar1);
          cVar3 = (**(code **)(**(longlong **)(param_1 + 8) + 0x20))();
          if (cVar2 != cVar3) break;
          puVar1 = puVar1 + 1;
        }
      }
      uVar6 = (ulonglong)((int)uVar6 + 1);
    } while ((&PTR_u_m_gtc_matrix_access_inl_140486aa0_0x48_140486d10)[uVar6 * 3] !=
             (undefined *)0x0);
  }
code_r0x0001400e5414:
  uVar5 = 0;
  if ((&PTR_u_m_gtc_matrix_access_inl_140486aa0_0x48_140486d10)[uVar6 * 3] != (undefined *)0x0) {
    uVar5 = *(ushort *)(&UNK_140486d24 + uVar6 * 0x18);
  }
  uVar4 = uVar5;
  if ((param_4 != '\0') && (uVar4 = uVar5 | 3, (uVar5 & 3) == 0)) {
    uVar4 = uVar5;
  }
  return uVar4;
}

