// Function: FUN_14032fda0
// Addr: 14032fda0
// Size: 453 bytes


void FUN_14032fda0(longlong *param_1,undefined8 *param_2)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  byte *pbVar4;
  undefined4 uVar5;
  bool bVar6;
  byte *local_res8;
  
  *(undefined4 *)(param_2 + 2) = 0;
  *param_2 = 0;
  param_2[1] = 0;
  pbVar2 = (byte *)param_1[2];
  for (local_res8 = (byte *)*param_1; local_res8 < pbVar2; local_res8 = local_res8 + 1) {
    bVar1 = *local_res8;
    if ((0x20 < bVar1) || ((0x100003601U >> ((ulonglong)bVar1 & 0x3f) & 1) == 0)) {
      if (bVar1 != 0x25) break;
      do {
        if ((*local_res8 == 0xd) || (*local_res8 == 10)) break;
        local_res8 = local_res8 + 1;
      } while (local_res8 < pbVar2);
    }
  }
  *param_1 = (longlong)local_res8;
  if (pbVar2 <= local_res8) {
    return;
  }
  bVar1 = *local_res8;
  *param_2 = local_res8;
  if (bVar1 == 0x28) {
    *(undefined4 *)(param_2 + 2) = 2;
    iVar3 = FUN_14033c310(&local_res8,pbVar2);
    bVar6 = iVar3 == 0;
    pbVar4 = local_res8;
  }
  else {
    if (bVar1 == 0x5b) {
      *(undefined4 *)(param_2 + 2) = 3;
      *param_1 = (longlong)(local_res8 + 1);
      FUN_14032fbb0(param_1);
      pbVar4 = (byte *)*param_1;
      if (pbVar4 < pbVar2) {
        iVar3 = 1;
        do {
          if ((int)param_1[3] != 0) break;
          if (*pbVar4 == 0x5b) {
            iVar3 = iVar3 + 1;
          }
          else if ((*pbVar4 == 0x5d) && (iVar3 = iVar3 + -1, iVar3 < 1)) {
            pbVar4 = pbVar4 + 1;
            goto LAB_14032fe5e;
          }
          *param_1 = (longlong)pbVar4;
          FUN_14032fc10(param_1);
          for (pbVar4 = (byte *)*param_1; pbVar4 < (byte *)param_1[2]; pbVar4 = pbVar4 + 1) {
            bVar1 = *pbVar4;
            if ((0x20 < bVar1) || ((0x100003601U >> ((ulonglong)bVar1 & 0x3f) & 1) == 0)) {
              if (bVar1 != 0x25) break;
              do {
                if ((*pbVar4 == 0xd) || (*pbVar4 == 10)) break;
                pbVar4 = pbVar4 + 1;
              } while (pbVar4 < (byte *)param_1[2]);
            }
          }
          *param_1 = (longlong)pbVar4;
        } while (pbVar4 < pbVar2);
      }
      goto LAB_14032fe62;
    }
    if (bVar1 == 0x7b) {
      *(undefined4 *)(param_2 + 2) = 3;
      iVar3 = FUN_14033c450(&local_res8,pbVar2);
      bVar6 = iVar3 == 0;
      pbVar4 = local_res8;
    }
    else {
      uVar5 = 1;
      if (*local_res8 == 0x2f) {
        uVar5 = 4;
      }
      *(undefined4 *)(param_2 + 2) = uVar5;
      FUN_14032fc10(param_1);
      bVar6 = (int)param_1[3] == 0;
      pbVar4 = (byte *)*param_1;
    }
  }
  if (bVar6) {
LAB_14032fe5e:
    param_2[1] = pbVar4;
  }
LAB_14032fe62:
  if (param_2[1] == 0) {
    *param_2 = 0;
    *(undefined4 *)(param_2 + 2) = 0;
  }
  *param_1 = (longlong)pbVar4;
  return;
}

