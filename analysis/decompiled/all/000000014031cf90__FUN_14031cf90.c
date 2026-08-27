// Function: FUN_14031cf90
// Addr: 14031cf90
// Size: 373 bytes


int FUN_14031cf90(longlong param_1,ushort *param_2)

{
  byte bVar1;
  uint uVar2;
  longlong lVar3;
  ushort uVar4;
  int iVar5;
  ushort *puVar6;
  longlong lVar7;
  byte *pbVar8;
  byte *pbVar9;
  int local_res8 [2];
  
  lVar3 = *(longlong *)(param_1 + 0x3e0);
  local_res8[0] = 0;
  if (lVar3 == 0) {
    return 0;
  }
  puVar6 = *(ushort **)(lVar3 + 0x1130);
  iVar5 = 0;
  if (puVar6 != (ushort *)0x0) goto LAB_14031d0ed;
  puVar6 = (ushort *)FUN_1402f7fa0(*(undefined8 *)(param_1 + 0x98),2,local_res8);
  if (local_res8[0] != 0) {
    return local_res8[0];
  }
  *puVar6 = 0;
  uVar2 = *(uint *)(lVar3 + 0x65c);
  if (uVar2 != 0xffff) {
    if (uVar2 < 0x187) {
      if (*(longlong *)(lVar3 + 0x10d8) == 0) goto LAB_14031d0e2;
      lVar7 = (**(code **)(*(longlong *)(lVar3 + 0x10d8) + 0x28))();
    }
    else {
      lVar7 = 0;
      if (uVar2 - 0x187 < *(uint *)(lVar3 + 0x5c0)) {
        lVar7 = *(longlong *)(*(longlong *)(lVar3 + 0x5c8) + (ulonglong)(uVar2 - 0x187) * 8);
      }
    }
    if ((lVar7 != 0) && (lVar7 = FUN_1402bbb40(lVar7,"/FSType"), lVar7 != 0)) {
      pbVar9 = (byte *)(lVar7 + 7);
      pbVar8 = (byte *)FUN_1402bbb40(pbVar9,&DAT_14043e300);
      if (pbVar8 != (byte *)0x0) {
        for (; pbVar9 != pbVar8; pbVar9 = pbVar9 + 1) {
          bVar1 = *pbVar9;
          if ((byte)(bVar1 - 0x30) < 10) {
            if (0x1997 < *puVar6) {
LAB_14031d0d8:
              *puVar6 = 0;
              break;
            }
            uVar4 = *puVar6 * 10;
            *puVar6 = uVar4;
            *puVar6 = (char)*pbVar9 + -0x30 + uVar4;
          }
          else if ((0x20 < bVar1) || ((0x100002400U >> ((longlong)(char)bVar1 & 0x3fU) & 1) == 0))
          goto LAB_14031d0d8;
        }
      }
    }
  }
LAB_14031d0e2:
  *(ushort **)(lVar3 + 0x1130) = puVar6;
  iVar5 = local_res8[0];
LAB_14031d0ed:
  *param_2 = *puVar6;
  return iVar5;
}

