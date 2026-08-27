// Function: FUN_1403294b0
// Addr: 1403294b0
// Size: 889 bytes


ulonglong FUN_1403294b0(longlong param_1,undefined4 *param_2,int param_3,uint param_4)

{
  longlong lVar1;
  short sVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  ulonglong uVar6;
  undefined4 *puVar7;
  short *psVar8;
  undefined8 uVar9;
  size_t sVar10;
  undefined8 uVar11;
  char *pcVar12;
  ushort uVar13;
  short sVar14;
  uint local_res20 [2];
  undefined4 *local_38;
  undefined8 local_30;
  
  uVar11 = *(undefined8 *)(param_2 + 0x26);
  uVar13 = (ushort)-param_3;
  if (-param_3 < 0) {
    uVar13 = (ushort)param_3;
  }
  local_res20[0] = param_4;
  uVar6 = FUN_140329c30(param_2,param_3);
  local_res20[0] = (uint)uVar6;
  if ((local_res20[0] == 0) && (param_3 < 0)) {
    return uVar6;
  }
  if ((char)uVar6 == '\x02') {
    puVar7 = (undefined4 *)FUN_1402f7e90(uVar11,0xb8,local_res20);
    *(undefined4 **)(param_2 + 0x36) = puVar7;
    if (local_res20[0] != 0) {
      return (ulonglong)local_res20[0];
    }
    *param_2 = 1;
    *puVar7 = 0;
    puVar7[0x2a] = *(undefined4 *)(param_1 + 8);
    uVar6 = FUN_14032a420(puVar7,param_1);
    local_res20[0] = (uint)uVar6;
    if (local_res20[0] != 0) goto LAB_1403297e2;
    if (param_3 < 0) {
      return uVar6;
    }
    if (uVar13 != 0) {
      local_res20[0] = 6;
      goto LAB_1403297e2;
    }
  }
  else if (local_res20[0] != 0) goto LAB_1403297e2;
  lVar1 = *(longlong *)(param_2 + 0x36);
  if (*(short *)(lVar1 + 0x60) != 0) {
    param_2[2] = param_2[2] | 0x12;
    param_2[1] = (uint)uVar13;
    if (*(short *)(lVar1 + 100) == *(short *)(lVar1 + 0x66)) {
      param_2[2] = param_2[2] | 4;
    }
    if (*(char *)(lVar1 + 0x56) != '\0') {
      param_2[3] = param_2[3] | 1;
    }
    if (799 < *(ushort *)(lVar1 + 0x5a)) {
      param_2[3] = param_2[3] | 2;
    }
    psVar8 = (short *)FUN_1402f7fa0(uVar11,0x10,local_res20);
    *(short **)(param_2 + 0xc) = psVar8;
    if (local_res20[0] != 0) goto LAB_1403297e2;
    param_2[10] = 1;
    psVar8[1] = *(short *)(lVar1 + 100);
    *psVar8 = *(short *)(lVar1 + 0x54) + *(short *)(lVar1 + 0x60);
    iVar3 = (uint)*(ushort *)(lVar1 + 0x4a) << 6;
    *(int *)(psVar8 + 2) = iVar3;
    sVar14 = *(short *)(lVar1 + 0x4e);
    sVar2 = *(short *)(lVar1 + 0x4c);
    if (sVar14 == 0) {
      sVar14 = 0x48;
    }
    if (sVar2 == 0) {
      sVar2 = 0x48;
    }
    iVar3 = FUN_1402f20b0(iVar3,sVar2,0x48);
    uVar4 = iVar3 + 0x20U & 0xffffffc0;
    *(uint *)(psVar8 + 6) = uVar4;
    iVar3 = (uint)*(ushort *)(lVar1 + 0x60) << 6;
    if (iVar3 < (int)uVar4) {
      *(int *)(psVar8 + 6) = iVar3;
      uVar5 = FUN_1402f20b0(iVar3,0x48,sVar2);
      *(undefined4 *)(psVar8 + 2) = uVar5;
    }
    iVar3 = FUN_1402f20b0(*(undefined4 *)(psVar8 + 2),sVar14,0x48);
    local_30 = 0;
    *(uint *)(psVar8 + 4) = iVar3 + 0x20U & 0xffffffc0;
    if (*(char *)(lVar1 + 0x5c) == 'M') {
      local_30 = 0x161726d6e;
    }
    local_38 = param_2;
    local_res20[0] = FUN_1402ef870(&DAT_14043fb80,0,&local_38,0);
    if (local_res20[0] != 0) goto LAB_1403297e2;
    if (*(byte *)(lVar1 + 0x68) <= *(byte *)(lVar1 + 0x69)) {
      param_2[4] = ((uint)*(byte *)(lVar1 + 0x69) - (uint)*(byte *)(lVar1 + 0x68)) + 2;
      if (*(uint *)(lVar1 + 0x74) < *(uint *)(lVar1 + 8)) {
        uVar4 = *(uint *)(lVar1 + 8) - *(uint *)(lVar1 + 0x74);
        uVar9 = FUN_1402f7fa0(uVar11,uVar4 + 1,local_res20);
        *(undefined8 *)(lVar1 + 0xb0) = uVar9;
        if (local_res20[0] == 0) {
          FUN_1404210f0(uVar9,(ulonglong)*(uint *)(lVar1 + 0x74) + *(longlong *)(lVar1 + 0xa0),uVar4
                       );
          *(undefined1 *)((ulonglong)uVar4 + *(longlong *)(lVar1 + 0xb0)) = 0;
          pcVar12 = *(char **)(lVar1 + 0xb0);
          sVar10 = strlen(pcVar12);
          uVar11 = FUN_1402f7ff0(uVar11,1,uVar4 + 1,(int)sVar10 + 1,pcVar12,local_res20);
          *(undefined8 *)(lVar1 + 0xb0) = uVar11;
          if (local_res20[0] == 0) {
            *(undefined8 *)(param_2 + 6) = uVar11;
            *(char **)(param_2 + 8) = "Regular";
            uVar4 = param_2[3] & 1;
            if ((param_2[3] & 2) != 0) {
              pcVar12 = "Bold Italic";
              if (uVar4 == 0) {
                pcVar12 = "Bold";
              }
              *(char **)(param_2 + 8) = pcVar12;
              return 0;
            }
            if (uVar4 == 0) {
              return 0;
            }
            *(char **)(param_2 + 8) = "Italic";
            return 0;
          }
        }
        goto LAB_1403297e2;
      }
    }
  }
  local_res20[0] = 3;
LAB_1403297e2:
  uVar11 = *(undefined8 *)(param_2 + 0x26);
  FUN_14032a3a0(param_2);
  FUN_1402f7f90(uVar11,*(undefined8 *)(param_2 + 0xc));
  *(undefined8 *)(param_2 + 0xc) = 0;
  param_2[10] = 0;
  return (ulonglong)local_res20[0];
}

