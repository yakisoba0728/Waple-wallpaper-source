// Function: FUN_14032fc10
// Addr: 14032fc10
// Size: 391 bytes


void FUN_14032fc10(undefined8 *param_1)

{
  byte *pbVar1;
  byte bVar2;
  byte *pbVar3;
  byte *pbVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  bool bVar8;
  bool bVar9;
  byte *local_res8;
  
  uVar6 = 0;
  uVar7 = 0;
  pbVar4 = (byte *)param_1[2];
  pbVar3 = (byte *)*param_1;
  for (local_res8 = pbVar3; uVar5 = 0, local_res8 < pbVar4; local_res8 = local_res8 + 1) {
    bVar2 = *local_res8;
    if ((0x20 < bVar2) || ((0x100003601U >> ((ulonglong)bVar2 & 0x3f) & 1) == 0)) {
      if (bVar2 != 0x25) {
        if ((bVar2 + 0xa5 & 0xfd) == 0) {
          local_res8 = local_res8 + 1;
          uVar6 = uVar7;
          goto LAB_14032fd69;
        }
        if (bVar2 == 0x7b) {
          uVar6 = FUN_14033c450(&local_res8,pbVar4);
          goto LAB_14032fd69;
        }
        if (bVar2 == 0x28) {
          uVar6 = FUN_14033c310(&local_res8,pbVar4);
          goto LAB_14032fd69;
        }
        if (bVar2 == 0x3c) {
          if ((local_res8 + 1 < pbVar4) && (local_res8[1] == 0x3c)) {
            local_res8 = local_res8 + 2;
            uVar6 = 0;
          }
          else {
            uVar6 = FUN_14033c5d0(&local_res8,pbVar4);
          }
          goto LAB_14032fd69;
        }
        if (bVar2 == 0x3e) {
          pbVar1 = local_res8 + 1;
          if ((pbVar1 < pbVar4) && (*pbVar1 == 0x3e)) {
            local_res8 = local_res8 + 2;
            uVar6 = uVar7;
          }
          else {
            local_res8 = pbVar1;
            uVar6 = 3;
          }
          goto LAB_14032fd69;
        }
        if (bVar2 == 0x2f) {
          local_res8 = local_res8 + 1;
        }
        bVar9 = local_res8 == pbVar4;
        bVar8 = false;
        if (pbVar4 <= local_res8) goto LAB_14032fd7c;
        goto LAB_14032fd40;
      }
      do {
        if ((*local_res8 == 0xd) || (*local_res8 == 10)) break;
        local_res8 = local_res8 + 1;
      } while (local_res8 < pbVar4);
    }
  }
  goto LAB_14032fd79;
LAB_14032fd69:
  bVar8 = local_res8 < pbVar4;
  bVar9 = local_res8 == pbVar4;
  if (!bVar8) goto LAB_14032fd7c;
  uVar5 = uVar6;
  if (local_res8 == pbVar3) {
    uVar5 = 3;
  }
  goto LAB_14032fd79;
  while (local_res8 = local_res8 + 1, local_res8 < pbVar4) {
LAB_14032fd40:
    bVar2 = *local_res8;
    if (((bVar2 < 0x3d) &&
        (uVar6 = uVar7, (0x1000832100003601U >> ((ulonglong)bVar2 & 0x3f) & 1) != 0)) ||
       (((byte)(bVar2 - 0x3e) < 0x40 &&
        (uVar6 = uVar7, (0xa0000000a0000001U >> ((ulonglong)(byte)(bVar2 - 0x3e) & 0x3f) & 1) != 0))
       )) goto LAB_14032fd69;
  }
LAB_14032fd79:
  uVar6 = uVar5;
  bVar8 = local_res8 < pbVar4;
  bVar9 = local_res8 == pbVar4;
LAB_14032fd7c:
  if (!bVar8 && !bVar9) {
    local_res8 = pbVar4;
  }
  *(undefined4 *)(param_1 + 3) = uVar6;
  *param_1 = local_res8;
  return;
}

