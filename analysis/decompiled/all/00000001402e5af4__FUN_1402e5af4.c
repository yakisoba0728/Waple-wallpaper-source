// Function: FUN_1402e5af4
// Addr: 1402e5af4
// Size: 166 bytes


void FUN_1402e5af4(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 unaff_RBX;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  if ((((*(undefined ***)(param_1 + 0xf8) != (undefined **)0x0) &&
       (*(undefined ***)(param_1 + 0xf8) != &PTR_DAT_1404dc580)) &&
      (*(int **)(param_1 + 0xe0) != (int *)0x0)) && (**(int **)(param_1 + 0xe0) == 0)) {
    if ((*(int **)(param_1 + 0xf0) != (int *)0x0) && (**(int **)(param_1 + 0xf0) == 0)) {
      FUN_1402d9110();
      func_0x0001402e4940(*(undefined8 *)(param_1 + 0xf8));
    }
    if ((*(int **)(param_1 + 0xe8) != (int *)0x0) && (**(int **)(param_1 + 0xe8) == 0)) {
      FUN_1402d9110();
      FUN_1402e4f68(*(undefined8 *)(param_1 + 0xf8));
    }
    FUN_1402d9110(*(undefined8 *)(param_1 + 0xe0));
    FUN_1402d9110(*(undefined8 *)(param_1 + 0xf8));
  }
  if ((*(int **)(param_1 + 0x100) != (int *)0x0) && (**(int **)(param_1 + 0x100) == 0)) {
    FUN_1402d9110(*(longlong *)(param_1 + 0x108) + -0xfe);
    FUN_1402d9110(*(longlong *)(param_1 + 0x110) + -0x80);
    FUN_1402d9110(*(longlong *)(param_1 + 0x118) + -0x80);
    FUN_1402d9110(*(undefined8 *)(param_1 + 0x100));
  }
  func_0x0001402e5c94(*(undefined8 *)(param_1 + 0x120));
  puVar4 = (undefined8 *)(param_1 + 0x128);
  lVar3 = 6;
  puVar5 = (undefined8 *)(param_1 + 0x38);
  do {
    if ((((undefined *)puVar5[-2] != &DAT_1404dc7c8) && ((int *)*puVar5 != (int *)0x0)) &&
       (*(int *)*puVar5 == 0)) {
      FUN_1402d9110();
      FUN_1402d9110(*puVar4);
    }
    if (((puVar5[-3] != 0) && ((int *)puVar5[-1] != (int *)0x0)) && (*(int *)puVar5[-1] == 0)) {
      FUN_1402d9110();
    }
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 4;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  if ((param_1 != 0) &&
     (iVar1 = (*DAT_1404264b8)(DAT_1404e4fa0,0,param_1,param_4,unaff_RBX), iVar1 == 0)) {
    uVar2 = (*DAT_1404266a8)();
    func_0x0001402caec4(uVar2);
                    /* WARNING: Subroutine does not return */
    FUN_1402cb004();
  }
  return;
}

