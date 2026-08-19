// Function: FUN_14039cc80
// Addr: 14039cc80
// Size: 142 bytes


/* WARNING: Possible PIC construction at 0x00014039cccb: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00014039ccfa: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00014039cccb) */
/* WARNING: Removing unreachable block (ram,0x00014039ccfa) */

void FUN_14039cc80(int *param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int *unaff_RBX;
  undefined *apuStack_30 [5];
  
  piVar1 = *(int **)param_1;
  if ((piVar1 != (int *)0x0) && (*piVar1 != 0)) {
    LOCK();
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      *piVar1 = -0xdead;
      param_1 = *(int **)(piVar1 + 2);
      unaff_RBX = piVar1;
      if (param_1 == (int *)0x0) {
        if (*(code **)(piVar1 + 10) != (code *)0x0) {
          apuStack_30[0] = (undefined *)0x14039cce7;
          (**(code **)(piVar1 + 10))(*(undefined8 *)(piVar1 + 8));
          piVar1[8] = 0;
          piVar1[9] = 0;
          piVar1[10] = 0;
          piVar1[0xb] = 0;
        }
        register0x00000020 = (BADSPACEBASE *)apuStack_30;
        apuStack_30[0] = (undefined *)0x14039ccff;
        param_1 = piVar1;
      }
      else {
        apuStack_30[0] = (undefined *)0x14039ccc8;
        FUN_1403c32f0(param_1);
        register0x00000020 = (BADSPACEBASE *)apuStack_30;
        apuStack_30[0] = &UNK_14039ccd0;
      }
    }
  }
  if (param_1 != (int *)0x0) {
    *(int **)((longlong)register0x00000020 + -8) = unaff_RBX;
    *(undefined8 *)((longlong)register0x00000020 + -0x30) = 0x1402d912c;
    iVar2 = (*DAT_1404264b8)(DAT_1404e4fa0,0,param_1);
    if (iVar2 == 0) {
      *(undefined8 *)((longlong)register0x00000020 + -0x30) = 0x1402d9136;
      uVar3 = (*DAT_1404266a8)();
      *(undefined8 *)((longlong)register0x00000020 + -0x30) = 0x1402d913d;
      func_0x0001402caec4(uVar3);
                    /* WARNING: Subroutine does not return */
      *(undefined **)((longlong)register0x00000020 + -0x30) = &UNK_1402d9144;
      FUN_1402cb004();
    }
  }
  return;
}

