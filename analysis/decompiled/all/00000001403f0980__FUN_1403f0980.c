// Function: FUN_1403f0980
// Addr: 1403f0980
// Size: 755 bytes


ulonglong FUN_1403f0980(longlong param_1,int *param_2,uint *param_3,char *param_4,code *param_5)

{
  longlong lVar1;
  byte bVar2;
  byte bVar3;
  ulonglong in_RAX;
  longlong lVar4;
  size_t sVar5;
  ulonglong uVar6;
  byte bVar7;
  uint uVar8;
  char local_res8 [8];
  
  if ((((param_1 != 0) && (param_2 != (int *)0x0)) && (param_3 != (uint *)0x0)) && (*param_2 != 0))
  {
    lVar4 = FUN_1402bbb40(param_1,param_4);
    in_RAX = 0;
    if (lVar4 != 0) {
      sVar5 = strlen(param_4);
      lVar1 = sVar5 + lVar4;
      if (*(char *)(sVar5 + lVar4) == '-') {
        bVar3 = *(byte *)(lVar1 + 1);
        if ((((byte)(bVar3 - 0x30) < 10) || ((byte)(bVar3 + 0x9f) < 6)) ||
           (in_RAX = (ulonglong)(bVar3 - 0x41), (byte)(bVar3 - 0x41) < 6)) {
          bVar7 = bVar3 - 0x30;
          if (9 < bVar7) {
            bVar7 = bVar3 + 0xa9;
          }
          bVar3 = *(byte *)(lVar1 + 2);
          if ((((byte)(bVar3 - 0x30) < 10) || ((byte)(bVar3 + 0x9f) < 6)) ||
             (in_RAX = (ulonglong)(bVar3 - 0x41), (byte)(bVar3 - 0x41) < 6)) {
            bVar2 = bVar3 - 0x30;
            if (9 < bVar2) {
              if ((byte)(bVar3 + 0xbf) < 0x1a) {
                bVar3 = bVar3 + 0x20;
              }
              bVar2 = bVar3 + 0xa9;
            }
            bVar3 = *(byte *)(lVar1 + 3);
            local_res8[0] = bVar7 * '\x10' + bVar2;
            if ((((byte)(bVar3 - 0x30) < 10) || ((byte)(bVar3 + 0x9f) < 6)) ||
               (in_RAX = (ulonglong)(bVar3 - 0x41), (byte)(bVar3 - 0x41) < 6)) {
              bVar7 = bVar3 - 0x30;
              if (9 < bVar7) {
                bVar7 = bVar3 + 0xa9;
              }
              bVar3 = *(byte *)(lVar1 + 4);
              if ((((byte)(bVar3 - 0x30) < 10) || ((byte)(bVar3 + 0x9f) < 6)) ||
                 (in_RAX = (ulonglong)(bVar3 - 0x41), (byte)(bVar3 - 0x41) < 6)) {
                bVar2 = bVar3 - 0x30;
                if (9 < bVar2) {
                  if ((byte)(bVar3 + 0xbf) < 0x1a) {
                    bVar3 = bVar3 + 0x20;
                  }
                  bVar2 = bVar3 + 0xa9;
                }
                bVar3 = *(byte *)(lVar1 + 5);
                local_res8[1] = bVar7 * '\x10' + bVar2;
                if ((((byte)(bVar3 - 0x30) < 10) || ((byte)(bVar3 + 0x9f) < 6)) ||
                   (in_RAX = (ulonglong)(bVar3 - 0x41), (byte)(bVar3 - 0x41) < 6)) {
                  bVar7 = bVar3 - 0x30;
                  if (9 < bVar7) {
                    bVar7 = bVar3 + 0xa9;
                  }
                  bVar3 = *(byte *)(lVar1 + 6);
                  if ((((byte)(bVar3 - 0x30) < 10) || ((byte)(bVar3 + 0x9f) < 6)) ||
                     (in_RAX = (ulonglong)(bVar3 - 0x41), (byte)(bVar3 - 0x41) < 6)) {
                    bVar2 = bVar3 - 0x30;
                    if (9 < bVar2) {
                      if ((byte)(bVar3 + 0xbf) < 0x1a) {
                        bVar3 = bVar3 + 0x20;
                      }
                      bVar2 = bVar3 + 0xa9;
                    }
                    bVar3 = *(byte *)(lVar1 + 7);
                    local_res8[2] = bVar7 * '\x10' + bVar2;
                    if ((((byte)(bVar3 - 0x30) < 10) || ((byte)(bVar3 + 0x9f) < 6)) ||
                       (in_RAX = (ulonglong)(bVar3 - 0x41), (byte)(bVar3 - 0x41) < 6)) {
                      bVar7 = bVar3 - 0x30;
                      if (9 < bVar7) {
                        bVar7 = bVar3 + 0xa9;
                      }
                      bVar3 = *(byte *)(lVar1 + 8);
                      if ((((byte)(bVar3 - 0x30) < 10) || ((byte)(bVar3 + 0x9f) < 6)) ||
                         (in_RAX = (ulonglong)(bVar3 - 0x41), (byte)(bVar3 - 0x41) < 6)) {
                        bVar2 = bVar3 - 0x30;
                        if (9 < bVar2) {
                          if ((byte)(bVar3 + 0xbf) < 0x1a) {
                            local_res8[3] = bVar7 * '\x10' + (bVar3 - 0x37);
                            goto LAB_1403f0c0a;
                          }
                          bVar2 = bVar3 + 0xa9;
                        }
                        local_res8[3] = bVar7 * '\x10' + bVar2;
                        goto LAB_1403f0c0a;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      else {
        uVar6 = 0;
        do {
          bVar3 = *(byte *)(uVar6 + lVar1);
          if (((0x19 < (byte)(bVar3 + 0x9f)) && (0x19 < (byte)(bVar3 + 0xbf))) &&
             (in_RAX = (ulonglong)(bVar3 - 0x30), 9 < (byte)(bVar3 - 0x30))) break;
          in_RAX = (*param_5)();
          local_res8[uVar6] = (char)in_RAX;
          uVar8 = (int)uVar6 + 1;
          uVar6 = (ulonglong)uVar8;
        } while ((int)uVar8 < 4);
        if ((uint)uVar6 != 0) {
          if ((uint)uVar6 < 4) {
            FUN_1404217a0(local_res8 + uVar6,0x20,4 - uVar6);
          }
LAB_1403f0c0a:
          uVar8 = CONCAT31(CONCAT21(CONCAT11(local_res8[0],local_res8[1]),local_res8[2]),
                           local_res8[3]);
          *param_3 = uVar8;
          if ((uVar8 & 0xdfdfdfdf) == 0x44464c54) {
            *param_3 = uVar8 ^ 0x20202020;
          }
          *param_2 = 1;
          return CONCAT71((uint7)(uint3)((uVar8 & 0xdfdfdfdf) >> 8),1);
        }
      }
    }
  }
  return in_RAX & 0xffffffffffffff00;
}

