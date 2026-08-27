// Function: FUN_1403e65a0
// Addr: 1403e65a0
// Size: 855 bytes


ulonglong FUN_1403e65a0(undefined8 param_1,longlong param_2,longlong param_3)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  puVar2 = (undefined8 *)FUN_1403c4f70(param_3 + 0x140);
  puVar3 = &DAT_14045dd10;
  if ((undefined8 *)*puVar2 != (undefined8 *)0x0) {
    puVar3 = (undefined8 *)*puVar2;
  }
  uVar1 = *(uint *)(puVar3 + 3);
  puVar2 = (undefined8 *)FUN_1403c4ed0(param_3 + 0x148);
  puVar3 = &DAT_14045dd10;
  if ((undefined8 *)*puVar2 != (undefined8 *)0x0) {
    puVar3 = (undefined8 *)*puVar2;
  }
  uVar5 = ((ulonglong)*(uint *)(param_2 + 0x18) << 0x15 | (ulonglong)uVar1) << 0x15 |
          (ulonglong)*(uint *)(puVar3 + 3);
  uVar4 = 0xe380622c0ba74;
  if (uVar5 < 0xe380622c0ba75) {
    if (((((((uVar5 == 0xe380622c0ba74) || (uVar4 = 0x7a8017cc0a2a6, uVar5 == 0x7a8017cc0a2a6)) ||
           ((uVar4 = 0x6b801674099ce, uVar5 == 0x6b801674099ce ||
            (((uVar4 = 0x2d0065fc01c56, uVar5 == 0x2d0065fc01c56 ||
              (uVar4 = 0x2f0001f000f0c, uVar5 == 0x2f0001f000f0c)) ||
             (uVar4 = 0x2f00021000d62, uVar5 == 0x2f00021000d62)))))) ||
          ((uVar4 = 0x300062bc01c56, uVar5 == 0x300062bc01c56 ||
           (uVar4 = 0x3000632401c56, uVar5 == 0x3000632401c56)))) ||
         ((uVar4 = 0x6b80167409ed6, uVar5 == 0x6b80167409ed6 ||
          (((uVar4 = 0x6e801674098cc, uVar5 == 0x6e801674098cc ||
            (uVar4 = 0x6e8016740a436, uVar5 == 0x6e8016740a436)) ||
           ((uVar4 = 0x778017cc0a3ae, uVar5 == 0x778017cc0a3ae ||
            (((uVar4 = 0xd00039380b83a, uVar5 == 0xd00039380b83a ||
              (uVar4 = 0x930027ac0379e, uVar5 == 0x930027ac0379e)) ||
             (uVar4 = 0x930027ac03852, uVar5 == 0x930027ac03852)))))))))) ||
        ((uVar4 = 0xcc003d780429c, uVar5 == 0xcc003d780429c ||
         (uVar4 = 0xcc003d78042f2, uVar5 == 0xcc003d78042f2)))) ||
       ((uVar4 = 0xd300390c0b1a2, uVar5 == 0xd300390c0b1a2 ||
        ((uVar4 = 0xdf808604086a8, uVar5 == 0xdf808604086a8 ||
         (uVar4 = 0xdf808614084a8, uVar5 == 0xdf808614084a8)))))) goto LAB_1403e68ec;
    uVar4 = 0xe08062140b586;
  }
  else {
    uVar4 = 0xfe80bff80f56c;
    if (uVar5 < 0xfe80bff80f56d) {
      if (((uVar5 == 0xfe80bff80f56c) || (uVar4 = 0xf880bf340ebb0, uVar5 == 0xf880bf340ebb0)) ||
         ((uVar4 = 0xe800b6040e7c4, uVar5 == 0xe800b6040e7c4 ||
          (((((uVar4 = 0xeb00b61c0ed3c, uVar5 == 0xeb00b61c0ed3c ||
              (uVar4 = 0xf100ba380eaa8, uVar5 == 0xf100ba380eaa8)) ||
             (uVar4 = 0xf400ba300f010, uVar5 == 0xf400ba300f010)) ||
            ((uVar4 = 0xfb01cda8039f4, uVar5 == 0xfb01cda8039f4 ||
             (uVar4 = 0xfb80bf2c0f12c, uVar5 == 0xfb80bf2c0f12c)))) ||
           (uVar4 = 0xfb80c0000efa2, uVar5 == 0xfb80c0000efa2)))))) goto LAB_1403e68ec;
      uVar4 = 0xfb80c0000efa8;
    }
    else {
      uVar4 = 0x108816f7002e2a;
      if (0x108816f7002e2a < uVar5) {
        uVar4 = 0x1088230e40446a;
        if (((uVar5 != 0x1088230e40446a) && (uVar4 = 0x1088230e804182, uVar5 != 0x1088230e804182))
           && (uVar4 = 0x14c835aa00e252, uVar5 != 0x14c835aa00e252)) {
          return CONCAT71(0x14c835aa00e6,uVar5 == 0x14c835aa00e65c);
        }
        goto LAB_1403e68ec;
      }
      if (((uVar5 == 0x108816f7002e2a) || (uVar4 = 0xfe80bff80f572, uVar5 == 0xfe80bff80f572)) ||
         ((uVar4 = 0x105816f6c03138, uVar5 == 0x105816f6c03138 ||
          (uVar4 = 0x1058230d8042d8, uVar5 == 0x1058230d8042d8)))) goto LAB_1403e68ec;
      uVar4 = 0x1058230dc045c6;
    }
  }
  if (uVar5 != uVar4) {
    return uVar4 & 0xffffffffffffff00;
  }
LAB_1403e68ec:
  return CONCAT71((int7)(uVar4 >> 8),1);
}

