// Function: FUN_1403cb930
// Addr: 1403cb930
// Size: 263 bytes


void FUN_1403cb930(longlong param_1,undefined8 param_2,undefined4 param_3,longlong param_4)

{
  longlong lVar1;
  undefined1 *puVar2;
  char *pcVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  puVar2 = (undefined1 *)
           FUN_1403cf4c0((ulonglong)*(byte *)(param_1 + 0x13) +
                         ((ulonglong)*(byte *)(param_1 + 0x12) +
                         (ulonglong)
                         CONCAT11(*(undefined1 *)(param_1 + 0x10),*(undefined1 *)(param_1 + 0x11)) *
                         0x100) * 0x100 + param_1,param_2,*(undefined4 *)(param_4 + 0x60));
  if (puVar2 == (undefined1 *)0x0) {
    uVar5 = 0;
  }
  else {
    uVar5 = (ulonglong)CONCAT11(*puVar2,puVar2[1]);
  }
  puVar2 = (undefined1 *)
           FUN_1403cf4c0((ulonglong)*(byte *)(param_1 + 0x17) +
                         ((ulonglong)*(byte *)(param_1 + 0x16) +
                         (ulonglong)
                         CONCAT11(*(undefined1 *)(param_1 + 0x14),*(undefined1 *)(param_1 + 0x15)) *
                         0x100) * 0x100 + param_1,param_3,*(undefined4 *)(param_4 + 0x60));
  if (puVar2 == (undefined1 *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = (ulonglong)CONCAT11(*puVar2,puVar2[1]);
  }
  pcVar3 = "OUT-OF-RANGE";
  lVar1 = (ulonglong)*(byte *)(param_1 + 0x1b) + param_1 +
          (((ulonglong)CONCAT11(*(undefined1 *)(param_1 + 0x18),*(undefined1 *)(param_1 + 0x19)) *
            0x100 + (ulonglong)*(byte *)(param_1 + 0x1a)) * 0x80 + uVar4 + uVar5) * 2 + 2;
  if ((ulonglong)(lVar1 - *(longlong *)(param_4 + 0x30)) <= (ulonglong)*(uint *)(param_4 + 0x40)) {
    pcVar3 = "OK";
  }
                    /* WARNING: Subroutine does not return */
  FUN_1402fc440("SANITIZE",lVar1,0,1,*(int *)(param_4 + 0x28) + 1,0,
                "check_point [%p] in [%p..%p] -> %s",lVar1,*(longlong *)(param_4 + 0x30),
                *(undefined8 *)(param_4 + 0x38),pcVar3);
}

