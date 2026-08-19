// Function: FUN_1403b36a0
// Addr: 1403b36a0
// Size: 129 bytes


/* WARNING: Possible PIC construction at 0x0001403b36cc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001403b36cc) */

undefined8 * FUN_1403b36a0(undefined8 *param_1)

{
  undefined4 uVar1;
  undefined8 *in_RAX;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *unaff_RBX;
  bool bVar4;
  undefined8 auStack_30 [5];
  
  puVar3 = (undefined8 *)*param_1;
  while (puVar3 != (undefined8 *)0x0) {
    LOCK();
    in_RAX = (undefined8 *)*param_1;
    bVar4 = puVar3 == in_RAX;
    if (bVar4) {
      *param_1 = 0;
      in_RAX = puVar3;
    }
    UNLOCK();
    if (bVar4) {
      register0x00000020 = (BADSPACEBASE *)auStack_30;
      auStack_30[0] = 0x1403b36d1;
      unaff_RBX = param_1;
      goto UNWIND_INFO_1402bf8b3_UnwindCodes_20__UnwindOpCode;
    }
    puVar3 = (undefined8 *)*param_1;
  }
  puVar3 = (undefined8 *)param_1[1];
  if (puVar3 != (undefined8 *)0x0) {
    while( true ) {
      LOCK();
      puVar2 = (undefined8 *)param_1[1];
      bVar4 = puVar3 == puVar2;
      if (bVar4) {
        param_1[1] = 0;
        puVar2 = puVar3;
      }
      UNLOCK();
      if (bVar4) break;
      puVar3 = (undefined8 *)param_1[1];
      if (puVar3 == (undefined8 *)0x0) {
        return puVar2;
      }
    }
    in_RAX = &DAT_14045dde0;
    if ((puVar3 != &DAT_14045dde0) && (puVar3 != (undefined8 *)0x0)) {
UNWIND_INFO_1402bf8b3_UnwindCodes_20__UnwindOpCode:
      if (puVar3 != (undefined8 *)0x0) {
        *(undefined8 **)((longlong)register0x00000020 + -8) = unaff_RBX;
        *(undefined8 *)((longlong)register0x00000020 + -0x30) = 0x1402d912c;
        in_RAX = (undefined8 *)(*DAT_1404264b8)(DAT_1404e4fa0,0,puVar3);
        if ((int)in_RAX == 0) {
          *(undefined8 *)((longlong)register0x00000020 + -0x30) = 0x1402d9136;
          uVar1 = (*DAT_1404266a8)();
          *(undefined8 *)((longlong)register0x00000020 + -0x30) = 0x1402d913d;
          func_0x0001402caec4(uVar1);
                    /* WARNING: Subroutine does not return */
          *(undefined **)((longlong)register0x00000020 + -0x30) = &UNK_1402d9144;
          FUN_1402cb004();
        }
      }
      return in_RAX;
    }
  }
  return in_RAX;
}

