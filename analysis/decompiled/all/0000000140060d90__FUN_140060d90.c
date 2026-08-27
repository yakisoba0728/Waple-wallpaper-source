// Function: FUN_140060d90
// Addr: 140060d90
// Size: 384 bytes


longlong * FUN_140060d90(longlong *param_1,short *param_2)

{
  short *psVar1;
  short *psVar2;
  ulonglong uVar3;
  short *psVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined1 local_res8;
  
  plVar6 = param_1;
  if (7 < (ulonglong)param_1[3]) {
    plVar6 = (longlong *)*param_1;
  }
  psVar4 = (short *)((longlong)plVar6 + param_1[2] * 2);
  psVar2 = psVar4;
  for (psVar1 = (short *)FUN_140015e90(plVar6); psVar1 != psVar2; psVar1 = psVar1 + 1) {
    if ((*psVar1 != 0x5c) && (*psVar1 != 0x2f)) goto LAB_140060de1;
  }
LAB_140060dfd:
  psVar1 = (short *)thunk_FUN_14028d070(psVar4);
  if ((psVar4 != psVar1) && (psVar2 = psVar1 + -1, psVar4 != psVar2)) {
    if (*psVar2 == 0x2e) {
      if ((psVar4 != psVar1 + -2) || (psVar1[-2] != 0x2e)) {
LAB_140060e31:
        psVar1 = psVar2;
      }
    }
    else {
      for (psVar2 = psVar1 + -2; psVar4 != psVar2; psVar2 = psVar2 + -1) {
        if (*psVar2 == 0x2e) goto LAB_140060e31;
      }
    }
  }
  uVar3 = (longlong)psVar1 - (longlong)plVar6 >> 1;
  if (uVar3 <= (ulonglong)param_1[2]) {
    param_1[2] = uVar3;
    plVar5 = param_1;
    if (7 < (ulonglong)param_1[3]) {
      plVar5 = (longlong *)*param_1;
    }
    *(undefined2 *)(((longlong)psVar1 - (longlong)plVar6 & 0xfffffffffffffffeU) + (longlong)plVar5)
         = 0;
    if (*(longlong *)(param_2 + 8) != 0) {
      psVar4 = param_2;
      if (7 < *(ulonglong *)(param_2 + 0xc)) {
        psVar4 = *(short **)param_2;
      }
      if (*psVar4 != 0x2e) {
        uVar3 = param_1[2];
        if (uVar3 < (ulonglong)param_1[3]) {
          param_1[2] = uVar3 + 1;
          if ((ulonglong)param_1[3] < 8) {
            *(undefined4 *)((longlong)param_1 + uVar3 * 2) = 0x2e;
          }
          else {
            *(undefined4 *)(*param_1 + uVar3 * 2) = 0x2e;
          }
        }
        else {
          FUN_140015f90(param_1,1,local_res8,0x2e);
        }
      }
    }
    psVar4 = param_2;
    if (7 < *(ulonglong *)(param_2 + 0xc)) {
      psVar4 = *(short **)param_2;
    }
    FUN_1400164d0(param_1,psVar4,*(undefined8 *)(param_2 + 8));
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140012940();
LAB_140060de1:
  psVar2 = psVar4 + -1;
  if (psVar4[-1] == 0x5c) goto LAB_140060dfd;
  if ((psVar4[-1] == 0x2f) || (psVar4 = psVar2, psVar1 == psVar2)) goto LAB_140060dfd;
  goto LAB_140060de1;
}

