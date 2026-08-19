// Function: FUN_1402a9bf0
// Addr: 1402a9bf0
// Size: 62 bytes


undefined8 *
FUN_1402a9bf0(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,short param_4,
             longlong param_5)

{
  int iVar1;
  longlong lVar2;
  short *psVar3;
  undefined8 uVar4;
  short sVar5;
  
  if (param_5 != 0) {
    lVar2 = param_3[1];
    do {
      if (lVar2 == 0) {
UNWIND_INFO_1402a9c30_UnwindCodes_30__UnwindOpCode:
        *(undefined1 *)param_3 = 1;
      }
      else {
        if (**(longlong **)(lVar2 + 0x40) == 0) {
code_r0x0001402a9c58:
          sVar5 = (*(code *)PTR_FUN_140426bb8)(lVar2,param_4);
        }
        else {
          iVar1 = **(int **)(lVar2 + 0x58);
          if (iVar1 < 1) goto code_r0x0001402a9c58;
          **(int **)(lVar2 + 0x58) = iVar1 + -1;
          psVar3 = (short *)**(longlong **)(lVar2 + 0x40);
          **(longlong **)(lVar2 + 0x40) = (longlong)(psVar3 + 1);
          *psVar3 = param_4;
          sVar5 = param_4;
        }
        if (sVar5 == -1) goto UNWIND_INFO_1402a9c30_UnwindCodes_30__UnwindOpCode;
      }
      param_5 = param_5 + -1;
    } while (param_5 != 0);
  }
  uVar4 = param_3[1];
  *param_2 = *param_3;
  param_2[1] = uVar4;
  return param_2;
}

