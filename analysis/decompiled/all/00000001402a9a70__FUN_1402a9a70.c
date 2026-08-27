// Function: FUN_1402a9a70
// Addr: 1402a9a70
// Size: 170 bytes


undefined8 * FUN_1402a9a70(undefined8 *param_1,undefined8 *param_2,short param_3,longlong param_4)

{
  int iVar1;
  longlong lVar2;
  short *psVar3;
  undefined8 uVar4;
  short sVar5;
  
  if (param_4 != 0) {
    lVar2 = param_2[1];
    do {
      if (lVar2 == 0) {
LAB_1402a9aef:
        *(undefined1 *)param_2 = 1;
      }
      else {
        if (**(longlong **)(lVar2 + 0x40) == 0) {
LAB_1402a9ad6:
          sVar5 = (*(code *)PTR__guard_dispatch_icall_140426ae8)(lVar2,param_3);
        }
        else {
          iVar1 = **(int **)(lVar2 + 0x58);
          if (iVar1 < 1) goto LAB_1402a9ad6;
          **(int **)(lVar2 + 0x58) = iVar1 + -1;
          psVar3 = (short *)**(longlong **)(lVar2 + 0x40);
          **(longlong **)(lVar2 + 0x40) = (longlong)(psVar3 + 1);
          *psVar3 = param_3;
          sVar5 = param_3;
        }
        if (sVar5 == -1) goto LAB_1402a9aef;
      }
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  uVar4 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar4;
  return param_1;
}

