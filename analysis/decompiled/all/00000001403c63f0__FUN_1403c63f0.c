// Function: FUN_1403c63f0
// Addr: 1403c63f0
// Size: 88 bytes


void FUN_1403c63f0(longlong param_1,longlong param_2,undefined8 param_3,float *param_4,
                  float *param_5)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  undefined8 *puVar4;
  byte bVar5;
  uint uVar6;
  undefined8 *puVar7;
  
  puVar7 = &DAT_14045dde0;
  lVar1 = *(longlong *)(param_2 + 0x90);
  *param_4 = (float)(int)(short)((ushort)*(byte *)(param_1 + 3) +
                                (ushort)*(byte *)(param_1 + 2) * 0x100) * *(float *)(lVar1 + 0x50);
  *param_5 = (float)(int)(short)((ushort)*(byte *)(param_1 + 4) * 0x100 +
                                (ushort)*(byte *)(param_1 + 5)) * *(float *)(lVar1 + 0x54);
  if (((*(int *)(lVar1 + 0x68) != 0) || (*(char *)(lVar1 + 0x78) != '\0')) &&
     (cVar2 = func_0x0001404094a0(param_1 + 6,param_2 + 0xa8,param_1), cVar2 != '\0')) {
    bVar5 = *(byte *)(param_1 + 6);
    uVar6 = (uint)CONCAT11(bVar5,*(undefined1 *)(param_1 + 7));
    if (uVar6 != 0) {
      cVar2 = func_0x0001404035d0((ulonglong)uVar6 + param_1,param_2 + 0xa8);
      if (cVar2 == '\0') goto code_r0x0001403c650e;
      bVar5 = *(byte *)(param_1 + 6);
    }
    uVar6 = (uint)bVar5 * 0x100 + (uint)*(byte *)(param_1 + 7);
    if (uVar6 == 0) {
      puVar4 = &DAT_14045dde0;
    }
    else {
      puVar4 = (undefined8 *)((ulonglong)uVar6 + param_1);
    }
    iVar3 = FUN_1403d0180(puVar4,lVar1,*(undefined8 *)(param_2 + 0x108),
                          *(undefined8 *)(param_2 + 0x110));
    *param_4 = (float)iVar3 + *param_4;
  }
code_r0x0001403c650e:
  if (((*(int *)(lVar1 + 0x6c) != 0) || (*(char *)(lVar1 + 0x78) != '\0')) &&
     (cVar2 = func_0x0001404094a0(param_1 + 8,param_2 + 0xa8,param_1), cVar2 != '\0')) {
    bVar5 = *(byte *)(param_1 + 9);
    uVar6 = (uint)*(byte *)(param_1 + 8) * 0x100 + (uint)bVar5;
    if (uVar6 != 0) {
      cVar2 = func_0x0001404035d0((ulonglong)uVar6 + param_1,param_2 + 0xa8);
      if (cVar2 == '\0') {
        return;
      }
      bVar5 = *(byte *)(param_1 + 9);
    }
    uVar6 = (uint)bVar5 + (uint)*(byte *)(param_1 + 8) * 0x100;
    if (uVar6 != 0) {
      puVar7 = (undefined8 *)((ulonglong)uVar6 + param_1);
    }
    iVar3 = FUN_1403d0230(puVar7,lVar1,*(undefined8 *)(param_2 + 0x108),
                          *(undefined8 *)(param_2 + 0x110));
    *param_5 = (float)iVar3 + *param_5;
  }
  return;
}

