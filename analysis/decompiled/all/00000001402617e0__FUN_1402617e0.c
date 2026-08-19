// Function: FUN_1402617e0
// Addr: 1402617e0
// Size: 68 bytes


undefined1 (*) [32] FUN_1402617e0(longlong *param_1,undefined1 (*param_2) [32],int param_3)

{
  undefined1 auVar1 [32];
  undefined1 (*pauVar2) [32];
  undefined1 (*pauVar3) [32];
  undefined1 (*pauVar4) [16];
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  undefined1 auVar8 [32];
  
  uVar5 = (ulonglong)param_3;
  if ((longlong)((param_1[1] - *param_1) + uVar5) <= (longlong)(ulonglong)*(uint *)(param_1 + 2)) {
                    /* WARNING: Subroutine does not return */
    FUN_1404211c0();
  }
  switch(uVar5) {
  case 0:
    return param_2;
  case 8:
    *(undefined8 *)(param_2[-1] + uVar5 + 0x18) = 0;
    return param_2;
  case 9:
    *(undefined8 *)(param_2[-1] + uVar5 + 0x17) = 0;
    param_2[-1][uVar5 + 0x1f] = 0;
    return param_2;
  case 10:
    *(undefined8 *)(param_2[-1] + uVar5 + 0x16) = 0;
    *(undefined2 *)(param_2[-1] + uVar5 + 0x1e) = 0;
    return param_2;
  case 0xb:
    *(undefined8 *)(param_2[-1] + uVar5 + 0x15) = 0;
    *(undefined2 *)(param_2[-1] + uVar5 + 0x1d) = 0;
    param_2[-1][uVar5 + 0x1f] = 0;
    return param_2;
  case 0xc:
    *(undefined8 *)(param_2[-1] + uVar5 + 0x14) = 0;
  case 4:
    *(undefined4 *)(param_2[-1] + uVar5 + 0x1c) = 0;
    return param_2;
  case 0xd:
    *(undefined8 *)(param_2[-1] + uVar5 + 0x13) = 0;
  case 5:
    *(undefined4 *)(param_2[-1] + uVar5 + 0x1b) = 0;
    param_2[-1][uVar5 + 0x1f] = 0;
    return param_2;
  case 0xe:
    *(undefined8 *)(param_2[-1] + uVar5 + 0x12) = 0;
  case 6:
    *(undefined4 *)(param_2[-1] + uVar5 + 0x1a) = 0;
  case 2:
    *(undefined2 *)(param_2[-1] + uVar5 + 0x1e) = 0;
    return param_2;
  case 0xf:
    *(undefined8 *)(param_2[-1] + uVar5 + 0x11) = 0;
  case 7:
    *(undefined4 *)(param_2[-1] + uVar5 + 0x19) = 0;
  case 3:
    *(undefined2 *)(param_2[-1] + uVar5 + 0x1d) = 0;
  case 1:
    param_2[-1][uVar5 + 0x1f] = 0;
    return param_2;
  }
  auVar8._0_16_ = ZEXT816(0);
  if (uVar5 < 0x21) {
    *(undefined1 (*) [16])*param_2 = auVar8._0_16_;
    *(undefined1 (*) [16])(param_2[-1] + uVar5 + 0x10) = auVar8._0_16_;
    return param_2;
  }
  pauVar2 = param_2;
  if (DAT_1404dc0d8 < 3) {
    if ((uVar5 <= uRam00000001404dc0e0) || ((DAT_1404e3b5c & 2) == 0)) {
      lVar7 = ((ulonglong)param_2 & 0xf) - 0x10;
      pauVar4 = (undefined1 (*) [16])((longlong)param_2 - lVar7);
      uVar5 = uVar5 + lVar7;
      if (0x80 < uVar5) {
        do {
          *pauVar4 = auVar8._0_16_;
          pauVar4[1] = auVar8._0_16_;
          pauVar4[2] = auVar8._0_16_;
          pauVar4[3] = auVar8._0_16_;
          pauVar4[4] = auVar8._0_16_;
          pauVar4[5] = auVar8._0_16_;
          pauVar4[6] = auVar8._0_16_;
          pauVar4[7] = auVar8._0_16_;
          pauVar4 = pauVar4 + 8;
          uVar5 = uVar5 - 0x80;
        } while (0x7f < uVar5);
      }
                    /* WARNING: Could not recover jumptable at 0x000140421bb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      pauVar2 = (undefined1 (*) [32])
                (*(code *)(&DAT_140000080.field_0x50 +
                          *(uint *)(&UNK_140497fc8 + (uVar5 + 0xf >> 4) * 4)))(pauVar4,-lVar7);
      return pauVar2;
    }
  }
  else if (((uVar5 <= uRam00000001404dc0e0) || (uRam00000001404dc0e8 < uVar5)) ||
          ((DAT_1404e3b5c & 2) == 0)) {
    auVar8._16_16_ = auVar8._0_16_;
    lVar7 = ((ulonglong)param_2 & 0x1f) - 0x20;
    pauVar2 = (undefined1 (*) [32])((longlong)param_2 - lVar7);
    uVar5 = uVar5 + lVar7;
    if (0x100 < uVar5) {
      if (uRam00000001404dc0e8 < uVar5) {
        do {
          uVar6 = uVar5;
          pauVar3 = pauVar2;
          auVar1 = vmovntdq_avx(auVar8);
          *pauVar3 = auVar1;
          auVar1 = vmovntdq_avx(auVar8);
          pauVar3[1] = auVar1;
          auVar1 = vmovntdq_avx(auVar8);
          pauVar3[2] = auVar1;
          auVar1 = vmovntdq_avx(auVar8);
          pauVar3[3] = auVar1;
          auVar1 = vmovntdq_avx(auVar8);
          pauVar3[4] = auVar1;
          auVar1 = vmovntdq_avx(auVar8);
          pauVar3[5] = auVar1;
          auVar1 = vmovntdq_avx(auVar8);
          pauVar3[6] = auVar1;
          auVar1 = vmovntdq_avx(auVar8);
          pauVar3[7] = auVar1;
          pauVar2 = pauVar3 + 8;
          uVar5 = uVar6 - 0x100;
        } while (0xff < uVar6 - 0x100);
        uVar5 = uVar6 - 0xe1 & 0xffffffffffffffe0;
        switch(uVar6) {
        case 0x1e1:
        case 0x1e2:
        case 0x1e3:
        case 0x1e4:
        case 0x1e5:
        case 0x1e6:
        case 0x1e7:
        case 0x1e8:
        case 0x1e9:
        case 0x1ea:
        case 0x1eb:
        case 0x1ec:
        case 0x1ed:
        case 0x1ee:
        case 0x1ef:
        case 0x1f0:
        case 0x1f1:
        case 0x1f2:
        case 499:
        case 500:
        case 0x1f5:
        case 0x1f6:
        case 0x1f7:
        case 0x1f8:
        case 0x1f9:
        case 0x1fa:
        case 0x1fb:
        case 0x1fc:
        case 0x1fd:
        case 0x1fe:
        case 0x1ff:
          auVar1 = vmovntdq_avx(auVar8);
          *(undefined1 (*) [32])(*pauVar3 + uVar5) = auVar1;
        case 0x1c1:
        case 0x1c2:
        case 0x1c3:
        case 0x1c4:
        case 0x1c5:
        case 0x1c6:
        case 0x1c7:
        case 0x1c8:
        case 0x1c9:
        case 0x1ca:
        case 0x1cb:
        case 0x1cc:
        case 0x1cd:
        case 0x1ce:
        case 0x1cf:
        case 0x1d0:
        case 0x1d1:
        case 0x1d2:
        case 0x1d3:
        case 0x1d4:
        case 0x1d5:
        case 0x1d6:
        case 0x1d7:
        case 0x1d8:
        case 0x1d9:
        case 0x1da:
        case 0x1db:
        case 0x1dc:
        case 0x1dd:
        case 0x1de:
        case 0x1df:
        case 0x1e0:
          auVar1 = vmovntdq_avx(auVar8);
          *(undefined1 (*) [32])(pauVar3[1] + uVar5) = auVar1;
        case 0x1a1:
        case 0x1a2:
        case 0x1a3:
        case 0x1a4:
        case 0x1a5:
        case 0x1a6:
        case 0x1a7:
        case 0x1a8:
        case 0x1a9:
        case 0x1aa:
        case 0x1ab:
        case 0x1ac:
        case 0x1ad:
        case 0x1ae:
        case 0x1af:
        case 0x1b0:
        case 0x1b1:
        case 0x1b2:
        case 0x1b3:
        case 0x1b4:
        case 0x1b5:
        case 0x1b6:
        case 0x1b7:
        case 0x1b8:
        case 0x1b9:
        case 0x1ba:
        case 0x1bb:
        case 0x1bc:
        case 0x1bd:
        case 0x1be:
        case 0x1bf:
        case 0x1c0:
          auVar1 = vmovntdq_avx(auVar8);
          *(undefined1 (*) [32])(pauVar3[2] + uVar5) = auVar1;
        case 0x181:
        case 0x182:
        case 0x183:
        case 0x184:
        case 0x185:
        case 0x186:
        case 0x187:
        case 0x188:
        case 0x189:
        case 0x18a:
        case 0x18b:
        case 0x18c:
        case 0x18d:
        case 0x18e:
        case 399:
        case 400:
        case 0x191:
        case 0x192:
        case 0x193:
        case 0x194:
        case 0x195:
        case 0x196:
        case 0x197:
        case 0x198:
        case 0x199:
        case 0x19a:
        case 0x19b:
        case 0x19c:
        case 0x19d:
        case 0x19e:
        case 0x19f:
        case 0x1a0:
          auVar1 = vmovntdq_avx(auVar8);
          *(undefined1 (*) [32])(pauVar3[3] + uVar5) = auVar1;
        case 0x161:
        case 0x162:
        case 0x163:
        case 0x164:
        case 0x165:
        case 0x166:
        case 0x167:
        case 0x168:
        case 0x169:
        case 0x16a:
        case 0x16b:
        case 0x16c:
        case 0x16d:
        case 0x16e:
        case 0x16f:
        case 0x170:
        case 0x171:
        case 0x172:
        case 0x173:
        case 0x174:
        case 0x175:
        case 0x176:
        case 0x177:
        case 0x178:
        case 0x179:
        case 0x17a:
        case 0x17b:
        case 0x17c:
        case 0x17d:
        case 0x17e:
        case 0x17f:
        case 0x180:
          auVar1 = vmovntdq_avx(auVar8);
          *(undefined1 (*) [32])(pauVar3[4] + uVar5) = auVar1;
        case 0x141:
        case 0x142:
        case 0x143:
        case 0x144:
        case 0x145:
        case 0x146:
        case 0x147:
        case 0x148:
        case 0x149:
        case 0x14a:
        case 0x14b:
        case 0x14c:
        case 0x14d:
        case 0x14e:
        case 0x14f:
        case 0x150:
        case 0x151:
        case 0x152:
        case 0x153:
        case 0x154:
        case 0x155:
        case 0x156:
        case 0x157:
        case 0x158:
        case 0x159:
        case 0x15a:
        case 0x15b:
        case 0x15c:
        case 0x15d:
        case 0x15e:
        case 0x15f:
        case 0x160:
          auVar1 = vmovntdq_avx(auVar8);
          *(undefined1 (*) [32])(pauVar3[5] + uVar5) = auVar1;
        case 0x121:
        case 0x122:
        case 0x123:
        case 0x124:
        case 0x125:
        case 0x126:
        case 0x127:
        case 0x128:
        case 0x129:
        case 0x12a:
        case 299:
        case 300:
        case 0x12d:
        case 0x12e:
        case 0x12f:
        case 0x130:
        case 0x131:
        case 0x132:
        case 0x133:
        case 0x134:
        case 0x135:
        case 0x136:
        case 0x137:
        case 0x138:
        case 0x139:
        case 0x13a:
        case 0x13b:
        case 0x13c:
        case 0x13d:
        case 0x13e:
        case 0x13f:
        case 0x140:
          auVar1 = vmovntdq_avx(auVar8);
          *(undefined1 (*) [32])(pauVar3[6] + uVar5) = auVar1;
        default:
          *(undefined1 (*) [32])(pauVar3[-1] + uVar6) = auVar8;
        case 0x100:
          *param_2 = auVar8;
          return param_2;
        }
      }
      do {
        *pauVar2 = auVar8;
        pauVar2[1] = auVar8;
        pauVar2[2] = auVar8;
        pauVar2[3] = auVar8;
        pauVar2[4] = auVar8;
        pauVar2[5] = auVar8;
        pauVar2[6] = auVar8;
        pauVar2[7] = auVar8;
        pauVar2 = pauVar2 + 8;
        uVar5 = uVar5 - 0x100;
      } while (0xff < uVar5);
    }
                    /* WARNING: Could not recover jumptable at 0x000140421a04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pauVar2 = (undefined1 (*) [32])
              (*(code *)(&DAT_140000080.field_0x50 +
                        *(uint *)((longlong)&IMAGE_THUNK_DATA64_140497f80.StartAddressOfRawData +
                                 (uVar5 + 0x1f >> 5) * 4)))(0,-lVar7);
    return pauVar2;
  }
  for (; uVar5 != 0; uVar5 = uVar5 - 1) {
    (*pauVar2)[0] = 0;
    pauVar2 = (undefined1 (*) [32])(*pauVar2 + 1);
  }
  return param_2;
}

