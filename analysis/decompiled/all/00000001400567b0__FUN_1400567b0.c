// Function: FUN_1400567b0
// Addr: 1400567b0
// Size: 536 bytes


void FUN_1400567b0(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  char cVar2;
  code *pcVar3;
  int iVar4;
  undefined8 uVar5;
  size_t sVar6;
  longlong lVar7;
  undefined8 *****pppppuVar8;
  ulonglong uVar9;
  undefined1 *puVar10;
  longlong *plVar11;
  longlong *plVar12;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [24];
  undefined8 ****local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  ulonglong local_10;
  
  puVar10 = auStack_48;
  uVar5 = FUN_140086de0(param_2,"plugins","");
  plVar1 = param_1 + 5;
  iVar4 = FUN_140290d80(plVar1);
  if (iVar4 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140290d30(5);
  }
  iVar4 = *(int *)((longlong)param_1 + 0x74);
  if (iVar4 == 0x7fffffff) {
LAB_1400569af:
    *(int *)((longlong)param_1 + 0x74) = iVar4 + -1;
                    /* WARNING: Subroutine does not return */
    *(undefined **)(puVar10 + -8) = &UNK_1400569be;
    FUN_140290d30(6);
  }
  param_1 = *(longlong **)param_1[1];
  cVar2 = *(char *)((longlong)param_1 + 0x19);
  do {
    if (cVar2 != '\0') {
      FUN_140290ea0(plVar1);
      return;
    }
    if (param_1[9] != 0) {
      plVar12 = param_1 + 4;
      plVar11 = plVar12;
      if (0xf < (ulonglong)param_1[7]) {
        plVar11 = (longlong *)*plVar12;
      }
      sVar6 = strlen((char *)plVar11);
      lVar7 = FUN_140087490(uVar5,plVar11,sVar6 + (longlong)plVar11);
      if (lVar7 == 0) {
        (**(code **)(*(longlong *)param_1[9] + 0x58))((longlong *)param_1[9],&DAT_1404776f4);
      }
      else {
        if (0xf < (ulonglong)param_1[7]) {
          plVar12 = (longlong *)*plVar12;
        }
        sVar6 = strlen((char *)plVar12);
        lVar7 = FUN_140086de0(uVar5,plVar12,sVar6 + (longlong)plVar12);
        if (*(char *)(lVar7 + 8) == '\a') {
          FUN_140004d00(&local_28,lVar7,0);
        }
        else {
          uStack_20 = 0;
          local_28 = (undefined8 ****)(ulonglong)DAT_1404776f4;
          local_18 = 2;
          local_10 = 0xf;
        }
        pppppuVar8 = &local_28;
        if (0xf < local_10) {
          pppppuVar8 = (undefined8 *****)local_28;
        }
        (**(code **)(*(longlong *)param_1[9] + 0x58))((longlong *)param_1[9],pppppuVar8);
        if (0xf < local_10) {
          uVar9 = local_10 + 1;
          pppppuVar8 = (undefined8 *****)local_28;
          if (0xfff < uVar9) {
            pppppuVar8 = (undefined8 *****)local_28[-1];
            if (0x1f < (ulonglong)((longlong)local_28 + (-8 - (longlong)pppppuVar8))) {
              pcVar3 = (code *)swi(0x29);
              iVar4 = (*pcVar3)(5);
              puVar10 = auStack_40;
              goto LAB_1400569af;
            }
            uVar9 = local_10 + 0x28;
          }
          thunk_FUN_14028af80(pppppuVar8,uVar9);
        }
      }
    }
    plVar12 = (longlong *)param_1[2];
    if (*(char *)((longlong)plVar12 + 0x19) == '\0') {
      cVar2 = *(char *)(*plVar12 + 0x19);
      param_1 = plVar12;
      while (cVar2 == '\0') {
        param_1 = (longlong *)*param_1;
        cVar2 = *(char *)(*param_1 + 0x19);
      }
    }
    else {
      cVar2 = *(char *)(param_1[1] + 0x19);
      plVar11 = (longlong *)param_1[1];
      plVar12 = param_1;
      while ((param_1 = plVar11, cVar2 == '\0' && (plVar12 == (longlong *)param_1[2]))) {
        cVar2 = *(char *)(param_1[1] + 0x19);
        plVar11 = (longlong *)param_1[1];
        plVar12 = param_1;
      }
    }
    cVar2 = *(char *)((longlong)param_1 + 0x19);
  } while( true );
}

