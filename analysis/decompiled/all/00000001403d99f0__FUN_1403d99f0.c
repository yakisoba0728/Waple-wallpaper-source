// Function: FUN_1403d99f0
// Addr: 1403d99f0
// Size: 145 bytes


void FUN_1403d99f0(longlong *param_1)

{
  uint *puVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  ushort uVar7;
  ulonglong uVar8;
  uint uVar9;
  longlong lVar10;
  
  lVar5 = param_1[3];
  FUN_1403d7d40();
  *(byte *)(lVar5 + 0xd0) = *(byte *)(lVar5 + 0xd0) | 0xf;
  FUN_14039fa00(*param_1);
  FUN_1403d8fb0(param_1);
  if ((*(byte *)(*param_1 + 0xb4) & 0x40) != 0) {
    uVar3 = *(uint *)(lVar5 + 0x60);
    uVar9 = 0;
    lVar6 = *(longlong *)(lVar5 + 0x70);
    if (uVar3 != 0) {
      lVar10 = 0;
      do {
        uVar2 = *(ushort *)(lVar6 + 0x10 + lVar10 * 0x14);
        puVar1 = (uint *)(lVar6 + lVar10 * 0x14);
        if (((byte)uVar2 & 0x1f) == 0xc) {
          uVar7 = uVar2 >> 8;
          if (199 < uVar7) goto code_r0x0001403d9b28;
          uVar4 = *puVar1;
          if ((uVar4 & 0xffffff00) != 0xe00) goto code_r0x0001403d9ae8;
          if (uVar7 == 0) {
            switch(uVar4) {
            case 0xe31:
            case 0xe34:
            case 0xe35:
            case 0xe36:
            case 0xe37:
            case 0xe47:
            case 0xe4c:
            case 0xe4d:
            case 0xe4e:
              goto code_r0x0001403d9ad5;
            case 0xeb1:
            case 0xeb4:
            case 0xeb5:
            case 0xeb6:
            case 0xeb7:
            case 0xebb:
            case 0xecc:
            case 0xecd:
              goto code_r0x0001403d9adc;
            case 0xebc:
              uVar7 = 0xdc;
            }
code_r0x0001403d9ae8:
            switch(uVar7) {
            case 3:
              goto code_r0x0001403d9b0e;
            case 10:
            case 0x6b:
code_r0x0001403d9ad5:
              uVar7 = 0xe8;
              break;
            case 0xb:
            case 0xe:
              uVar7 = 0xe4;
              break;
            case 0xd:
              uVar7 = 0xd6;
              break;
            case 0xf:
            case 0x10:
            case 0x11:
            case 0x12:
            case 0x13:
            case 0x14:
            case 0x15:
            case 0x16:
            case 0x17:
            case 0x18:
            case 0x19:
            case 0x1e:
            case 0x21:
            case 0x76:
            case 0x81:
            case 0x83:
              uVar7 = 0xdc;
              break;
            case 0x1a:
            case 0x1b:
            case 0x1c:
            case 0x1d:
            case 0x1f:
            case 0x20:
            case 0x22:
            case 0x23:
            case 0x24:
            case 0x7a:
            case 0x84:
code_r0x0001403d9adc:
              uVar7 = 0xe6;
            }
          }
          else {
            if (uVar4 != 0xe3a) goto code_r0x0001403d9ae8;
code_r0x0001403d9b0e:
            uVar7 = 0xde;
          }
code_r0x0001403d9b28:
          *(ushort *)(puVar1 + 4) = uVar7 << 8 | uVar2 & 0xff;
        }
        uVar9 = uVar9 + 1;
        lVar10 = lVar10 + 1;
      } while (uVar9 < uVar3);
    }
  }
  uVar3 = *(uint *)(lVar5 + 0x60);
  uVar8 = 0;
  lVar6 = *(longlong *)(lVar5 + 0x70);
  if (uVar3 != 0) {
    do {
      uVar9 = (int)uVar8 + 1;
      *(undefined4 *)(lVar6 + uVar8 * 0x14) = *(undefined4 *)(lVar6 + 0xc + uVar8 * 0x14);
      uVar8 = (ulonglong)uVar9;
    } while (uVar9 < uVar3);
  }
  *(byte *)(lVar5 + 0xd0) = *(byte *)(lVar5 + 0xd0) & 0xf0;
  *(undefined4 *)(lVar5 + 0x30) = 2;
  return;
}

