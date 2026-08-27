// Function: FUN_1403459b0
// Addr: 1403459b0
// Size: 545 bytes


ulonglong FUN_1403459b0(longlong param_1,int *param_2,uint *param_3)

{
  byte bVar1;
  longlong lVar2;
  byte *pbVar3;
  uint uVar4;
  ushort uVar5;
  byte *in_RAX;
  longlong lVar6;
  int iVar7;
  undefined4 uVar8;
  uint uVar9;
  uint uVar10;
  
  lVar2 = *(longlong *)(param_1 + 0x4e0);
  if (((lVar2 != 0) && (*(longlong *)(lVar2 + 0x80) != 0)) && (param_3 != (uint *)0x0)) {
    uVar10 = param_3[1];
    in_RAX = (byte *)(ulonglong)uVar10;
    if ((uVar10 < *param_3) &&
       (pbVar3 = *(byte **)(param_3 + 2), *(byte **)(lVar2 + 0x40) <= pbVar3)) {
      iVar7 = *param_3 - uVar10;
      uVar10 = iVar7 * 10 - 10;
      if ((char)param_3[4] == '\0') {
        uVar10 = iVar7 * 6 - 6;
      }
      lVar6 = 10;
      if ((char)param_3[4] == '\0') {
        lVar6 = 6;
      }
      in_RAX = (byte *)(((ulonglong)*(uint *)(lVar2 + 0x88) - lVar6) + *(longlong *)(lVar2 + 0x80));
      if (pbVar3 + uVar10 <= in_RAX) {
        *param_2 = ((int)(short)((ushort)*pbVar3 << 8) | (uint)pbVar3[1]) << 2;
        *(ushort *)(param_2 + 1) = CONCAT11(pbVar3[2],pbVar3[3]);
        bVar1 = pbVar3[4];
        *(ushort *)((longlong)param_2 + 6) = CONCAT11(bVar1,pbVar3[5]);
        if ((char)param_3[4] == '\0') {
          param_3[1] = param_3[1] + 1;
          *(byte **)(param_3 + 2) = pbVar3 + 6;
          return CONCAT71((uint7)bVar1,1);
        }
        uVar9 = 0;
        uVar8 = 0;
        uVar10 = CONCAT31(CONCAT21(CONCAT11(pbVar3[6],pbVar3[7]),pbVar3[8]),pbVar3[9]);
        if (uVar10 == 0xffffffff) {
          iVar7 = 0;
        }
        else {
          lVar6 = *(longlong *)(param_1 + 0x2e0);
          uVar4 = uVar10;
          if (*(longlong *)(lVar2 + 0x78) != 0) {
            uVar4 = *(uint *)(lVar2 + 0x68) - 1;
            if (uVar10 < *(uint *)(lVar2 + 0x68)) {
              uVar4 = uVar10;
            }
            uVar9 = *(uint *)((ulonglong)uVar4 * 4 + *(longlong *)(lVar2 + 0x70));
            uVar4 = *(uint *)((ulonglong)uVar4 * 4 + *(longlong *)(lVar2 + 0x78));
          }
          iVar7 = (**(code **)(lVar6 + 0x70))(param_1,lVar2 + 0x48,uVar9,uVar4);
          uVar10 = uVar10 + 1;
          if (*(longlong *)(lVar2 + 0x78) != 0) {
            uVar9 = *(uint *)(lVar2 + 0x68) - 1;
            if (uVar10 < *(uint *)(lVar2 + 0x68)) {
              uVar9 = uVar10;
            }
            uVar8 = *(undefined4 *)(*(longlong *)(lVar2 + 0x70) + (ulonglong)uVar9 * 4);
            uVar10 = *(uint *)(*(longlong *)(lVar2 + 0x78) + (ulonglong)uVar9 * 4);
          }
          uVar5 = (**(code **)(lVar6 + 0x70))(param_1,lVar2 + 0x48,uVar8,uVar10);
          uVar9 = (uint)uVar5;
        }
        *(short *)((longlong)param_2 + 6) = *(short *)((longlong)param_2 + 6) + (short)uVar9;
        *param_2 = *param_2 + iVar7 * 4;
        param_3[1] = param_3[1] + 1;
        *(byte **)(param_3 + 2) = pbVar3 + 10;
        return CONCAT71((uint7)(uint3)((uint)(iVar7 * 4) >> 8),1);
      }
    }
  }
  return (ulonglong)in_RAX & 0xffffffffffffff00;
}

