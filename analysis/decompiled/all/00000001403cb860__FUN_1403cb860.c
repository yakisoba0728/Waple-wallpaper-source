// Function: FUN_1403cb860
// Addr: 1403cb860
// Size: 472 bytes


ulonglong FUN_1403cb860(longlong param_1,undefined8 param_2,undefined4 param_3,longlong param_4)

{
  byte *pbVar1;
  char cVar2;
  undefined1 *puVar3;
  char *pcVar4;
  ulonglong uVar5;
  byte *pbVar6;
  ulonglong uVar7;
  int iVar8;
  ulonglong uVar9;
  
  puVar3 = (undefined1 *)
           FUN_1403cf3f0((ulonglong)*(byte *)(param_1 + 0x13) +
                         ((ulonglong)*(byte *)(param_1 + 0x12) +
                         (ulonglong)
                         CONCAT11(*(undefined1 *)(param_1 + 0x10),*(undefined1 *)(param_1 + 0x11)) *
                         0x100) * 0x100 + param_1,param_2,*(undefined4 *)(param_4 + 0x60));
  if (puVar3 == (undefined1 *)0x0) {
    uVar7 = 0;
  }
  else {
    uVar7 = (ulonglong)CONCAT11(*puVar3,puVar3[1]);
  }
  puVar3 = (undefined1 *)
           FUN_1403cf3f0((ulonglong)*(byte *)(param_1 + 0x17) +
                         ((ulonglong)*(byte *)(param_1 + 0x16) +
                         (ulonglong)
                         CONCAT11(*(undefined1 *)(param_1 + 0x14),*(undefined1 *)(param_1 + 0x15)) *
                         0x100) * 0x100 + param_1,param_3,*(undefined4 *)(param_4 + 0x60));
  if (puVar3 == (undefined1 *)0x0) {
    uVar5 = 0;
  }
  else {
    uVar5 = (ulonglong)CONCAT11(*puVar3,puVar3[1]);
  }
  uVar9 = (ulonglong)*(uint *)(param_4 + 0x40);
  pcVar4 = "OUT-OF-RANGE";
  pbVar1 = (byte *)((ulonglong)*(byte *)(param_1 + 0x1b) + param_1 +
                   (((ulonglong)
                     CONCAT11(*(undefined1 *)(param_1 + 0x18),*(undefined1 *)(param_1 + 0x19)) *
                     0x100 + (ulonglong)*(byte *)(param_1 + 0x1a)) * 0x80 + uVar5 + uVar7) * 2);
  pbVar6 = pbVar1 + 2;
  uVar7 = (longlong)pbVar6 - *(longlong *)(param_4 + 0x30);
  if (uVar7 <= uVar9) {
    pcVar4 = "OK";
  }
  FUN_1402fc370("SANITIZE",pbVar6,0,1,*(int *)(param_4 + 0x28) + 1,0,
                "check_point [%p] in [%p..%p] -> %s",pbVar6,*(longlong *)(param_4 + 0x30),
                *(undefined8 *)(param_4 + 0x38),pcVar4);
  if (uVar9 < uVar7) {
    return 0;
  }
  iVar8 = (uint)*(byte *)(param_1 + 9) * 0x10000 + (uint)*(byte *)(param_1 + 10) * 0x100 +
          (uint)*(byte *)(param_1 + 8) * 0x1000000 + (uint)*(byte *)(param_1 + 0xb);
  uVar7 = (ulonglong)(uint)(int)(short)((ushort)*pbVar1 * 0x100 + (ushort)pbVar1[1]);
  if ((iVar8 != 0) && (param_4 != 0)) {
    pbVar6 = (byte *)(param_1 + uVar7);
    cVar2 = FUN_14036f0c0(param_4 + 0x28,pbVar6,iVar8,2);
    if (cVar2 == '\0') {
      return 0;
    }
    uVar7 = (ulonglong)(uint)(int)(short)((ushort)*pbVar6 * 0x100 + (ushort)pbVar6[1]);
  }
  return uVar7;
}

