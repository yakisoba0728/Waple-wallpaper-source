// Function: FUN_14032e040
// Addr: 14032e040
// Size: 426 bytes


int FUN_14032e040(longlong param_1,undefined8 param_2,uint param_3,undefined8 *param_4)

{
  longlong lVar1;
  uint *puVar2;
  int local_38;
  undefined1 local_34 [12];
  
  local_38 = 0;
  puVar2 = (uint *)FUN_1402f7e90(param_2,0x48,&local_38);
  if (local_38 == 0) {
    *puVar2 = param_3;
    *(undefined2 *)(puVar2 + 3) = 0x7fff;
    puVar2[0x10] = *(uint *)(param_1 + 8);
    *(undefined8 *)(puVar2 + 0xe) = param_2;
    local_38 = FUN_14032f040(param_1,puVar2,local_34);
    if (local_38 == 0) {
      lVar1 = *(longlong *)(puVar2 + 0xc);
      if (((lVar1 != 0) && ((*puVar2 & 0x1000) != 0)) &&
         ((*(int *)(lVar1 + 0x34) != 0 || (*(int *)(lVar1 + 0x44) != 0)))) {
        if ((int)(short)puVar2[4] - (int)(short)puVar2[3] != (uint)*(ushort *)(lVar1 + 8)) {
          *(short *)(lVar1 + 8) = (short)puVar2[4] - (short)puVar2[3];
        }
        if (*(short *)(*(longlong *)(puVar2 + 0xc) + 0xc) != (short)puVar2[3]) {
          *(short *)(*(longlong *)(puVar2 + 0xc) + 0xc) = (short)puVar2[3];
        }
        if (*(short *)(*(longlong *)(puVar2 + 0xc) + 0x10) != *(short *)((longlong)puVar2 + 0x12)) {
          *(short *)(*(longlong *)(puVar2 + 0xc) + 0x10) = *(short *)((longlong)puVar2 + 0x12);
        }
        if (*(short *)(*(longlong *)(puVar2 + 0xc) + 0x12) != (short)puVar2[5]) {
          *(short *)(*(longlong *)(puVar2 + 0xc) + 0x12) = (short)puVar2[5];
          *(short *)(*(longlong *)(puVar2 + 0xc) + 0xe) = -(short)puVar2[5];
        }
        if ((int)*(short *)((longlong)puVar2 + 0x12) + (int)(short)puVar2[5] !=
            (uint)*(ushort *)(*(longlong *)(puVar2 + 0xc) + 10)) {
          *(short *)(*(longlong *)(puVar2 + 0xc) + 10) =
               (short)puVar2[5] + *(short *)((longlong)puVar2 + 0x12);
        }
      }
      if ((*puVar2 & 1) == 0) {
        if (*(longlong *)(puVar2 + 0xc) == 0) {
          local_38 = 3;
        }
        *param_4 = *(undefined8 *)(puVar2 + 0xc);
        goto LAB_14032e19d;
      }
      local_38 = ((*puVar2 & 0x20) != 0) + 0xb9;
    }
    FUN_14032db10(*(undefined8 *)(puVar2 + 0xc));
    FUN_1402f7f90(param_2,*(undefined8 *)(puVar2 + 0xc));
    puVar2[0xc] = 0;
    puVar2[0xd] = 0;
  }
  if (puVar2 == (uint *)0x0) {
    return local_38;
  }
LAB_14032e19d:
  FUN_1402f7f90(param_2,*(undefined8 *)(puVar2 + 6));
  puVar2[6] = 0;
  puVar2[7] = 0;
  FUN_1402f7f90(param_2,puVar2);
  return local_38;
}

