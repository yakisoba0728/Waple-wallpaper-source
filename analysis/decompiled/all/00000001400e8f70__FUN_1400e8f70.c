// Function: FUN_1400e8f70
// Addr: 1400e8f70
// Size: 188 bytes


void FUN_1400e8f70(longlong param_1,ushort param_2,int param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  uint uVar3;
  ulonglong uVar4;
  bool bVar5;
  
  lVar1 = *(longlong *)(param_1 + 8);
  uVar4 = 0;
  do {
    if (param_2 == 0xffff) {
      if (((char)uVar4 == '_') ||
         ((*(ushort *)
            (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + 8) + 0x18) +
            (uVar4 & 0xff) * 2) & 0x107) != 0)) {
        bVar5 = true;
      }
      else {
        bVar5 = false;
      }
    }
    else {
      bVar5 = (*(ushort *)
                (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + 8) + 0x18) +
                (uVar4 & 0xff) * 2) & param_2) != 0;
    }
    if (bVar5 != (param_3 != 0)) {
      puVar2 = *(undefined8 **)(lVar1 + 0x28);
      if (puVar2 == (undefined8 *)0x0) {
        puVar2 = (undefined8 *)FUN_14028af20(0x20);
        *puVar2 = 0;
        puVar2[1] = 0;
        puVar2[2] = 0;
        puVar2[3] = 0;
        *(undefined8 **)(lVar1 + 0x28) = puVar2;
      }
      *(byte *)((longlong)puVar2 + (uVar4 >> 3)) =
           *(byte *)((longlong)puVar2 + (uVar4 >> 3)) | (byte)(1 << ((uint)uVar4 & 7));
    }
    uVar3 = (uint)uVar4 + 1;
    uVar4 = (ulonglong)uVar3;
  } while (uVar3 < 0x100);
  return;
}

