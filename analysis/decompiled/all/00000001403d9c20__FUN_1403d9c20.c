// Function: FUN_1403d9c20
// Addr: 1403d9c20
// Size: 707 bytes


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1403d9c20(longlong *param_1)

{
  longlong lVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  longlong lVar6;
  char cVar7;
  longlong *plVar8;
  uint uVar9;
  undefined8 *puVar10;
  undefined2 uVar11;
  uint uVar12;
  longlong lVar13;
  longlong lVar14;
  undefined1 auStack_88 [32];
  longlong local_68;
  undefined2 local_58;
  longlong local_50;
  longlong *local_48;
  undefined1 local_40;
  undefined1 local_3f;
  undefined1 local_3e;
  undefined1 local_3d;
  undefined1 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_1404dc040 ^ (ulonglong)auStack_88;
  lVar14 = param_1[3];
  local_50 = lVar14;
  local_48 = param_1;
  plVar8 = (longlong *)FUN_1403c4e30(*(longlong *)(param_1[1] + 0x20) + 0x138);
  uVar3 = *(uint *)(lVar14 + 0x60);
  uVar12 = 0;
  lVar6 = *(longlong *)(lVar14 + 0x70);
  if (uVar3 != 0) {
    lVar13 = 0;
    do {
      uVar4 = *(uint *)(lVar6 + lVar13 * 0x14);
      lVar14 = lVar6 + lVar13 * 0x14;
      lVar1 = (ulonglong)(uVar4 & 0xff) * 2 + 0x18;
      uVar2 = *(ushort *)(lVar1 + (longlong)plVar8);
      local_58 = 0xffff;
      if ((uVar2 == 0xffff) || (((uVar4 >> 5 ^ (uint)uVar2) & 0xfffffff8) != 0)) {
        puVar10 = &DAT_14045dd10;
        if ((undefined8 *)*plVar8 != (undefined8 *)0x0) {
          puVar10 = (undefined8 *)*plVar8;
        }
        if (*(uint *)(puVar10 + 3) < 4) {
          puVar10 = &DAT_14045dd10;
        }
        else {
          puVar10 = (undefined8 *)puVar10[2];
        }
        uVar9 = FUN_1403caa10(puVar10);
        if (((*plVar8 != 0) && (uVar4 < 0x200000)) && (uVar9 < 8)) {
          *(ushort *)(lVar1 + (longlong)plVar8) = (ushort)(uVar4 >> 5) & 0xfff8 | (ushort)uVar9;
        }
      }
      else {
        uVar9 = uVar2 & 7;
      }
      uVar12 = uVar12 + 1;
      *(short *)(lVar14 + 0xc) = (short)uVar9;
      lVar13 = lVar13 + 1;
      *(undefined1 *)(lVar14 + 0xe) = 0;
      param_1 = local_48;
      lVar14 = local_50;
    } while (uVar12 < uVar3);
  }
  if ((*(byte *)(*param_1 + 0xb4) & 0x20) != 0) {
    uVar12 = 0;
    uVar3 = *(uint *)(param_1[3] + 0x60);
    lVar6 = *(longlong *)(param_1[3] + 0x70);
    if (uVar3 != 0) {
      lVar13 = 0;
      do {
        uVar2 = *(ushort *)(lVar6 + 0x10 + lVar13 * 0x14);
        lVar1 = lVar6 + lVar13 * 0x14;
        if ((((byte)uVar2 & 0x1f) == 0xc) &&
           (((uVar2 & 0x20) == 0 || ((*(byte *)(lVar1 + 0xc) & 0x10) != 0)))) {
          uVar11 = 8;
        }
        else {
          uVar11 = 2;
        }
        uVar12 = uVar12 + 1;
        *(undefined2 *)(lVar1 + 0xc) = uVar11;
        lVar13 = lVar13 + 1;
      } while (uVar12 < uVar3);
    }
  }
  if ((*(byte *)(*param_1 + 0xb5) & 0x10) == 0) {
    FUN_14040f280(param_1[3]);
    lVar6 = param_1[1];
    lVar13 = *param_1;
    local_50 = FUN_1403c4f70(*(longlong *)(lVar6 + 0x20) + 0x140);
    uVar5 = *(undefined4 *)(lVar13 + 0x28);
    local_40 = (undefined1)((uint)uVar5 >> 0x18);
    local_3f = (undefined1)((uint)uVar5 >> 0x10);
    local_3c = 0;
    local_3e = (undefined1)((uint)uVar5 >> 8);
    local_3d = (undefined1)uVar5;
    if (((*(longlong *)(lVar14 + 0xe8) == 0) ||
        (cVar7 = FUN_1403ec530(lVar14,lVar6,"start table GSUB script tag \'%s\'",&local_40),
        cVar7 != '\0')) &&
       (local_68 = lVar14, FUN_14036c080(lVar13 + 0x28,&local_50,lVar13,lVar6),
       *(longlong *)(lVar14 + 0xe8) != 0)) {
      FUN_1403ec530(lVar14,lVar6,"end table GSUB script tag \'%s\'",&local_40);
    }
  }
  else {
    local_68 = CONCAT44(local_68._4_4_,(int)param_1[5]);
    FUN_1403d12d0(*param_1,param_1[1],param_1[3],param_1[4]);
    FUN_14040f280(param_1[3]);
  }
  return;
}

