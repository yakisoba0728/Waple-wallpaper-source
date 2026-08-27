// Function: FUN_1403e37f0
// Addr: 1403e37f0
// Size: 727 bytes


char * FUN_1403e37f0(undefined4 *param_1,char param_2,longlong param_3,undefined4 *param_4,
                    ulonglong param_5,uint param_6,undefined8 param_7,undefined4 param_8,
                    undefined8 *param_9)

{
  undefined8 *puVar1;
  char *_Str1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  bool bVar14;
  
  uVar13 = 0;
  uVar9 = uVar13;
  if (((param_2 == '\0') || (uVar9 = 0, param_6 == 0)) ||
     (uVar9 = _calloc_base(param_6,0x10), uVar9 != 0)) {
    uVar3 = param_4[1];
    uVar4 = param_4[2];
    uVar5 = param_4[3];
    *param_1 = *param_4;
    param_1[1] = uVar3;
    param_1[2] = uVar4;
    param_1[3] = uVar5;
    if (param_2 != '\0') {
      param_5 = uVar9;
    }
    uVar3 = param_4[4];
    uVar4 = param_4[5];
    uVar5 = param_4[6];
    uVar6 = param_4[7];
    *(ulonglong *)(param_1 + 8) = param_5;
    param_1[10] = param_6;
    param_1[4] = uVar3;
    param_1[5] = uVar4;
    param_1[6] = uVar5;
    param_1[7] = uVar6;
    if (((param_2 != '\0') && (param_6 != 0)) && (param_6 != 0)) {
      FUN_1404210f0(uVar9);
      uVar12 = uVar13;
      do {
        if (*(int *)(uVar9 + 8) != 0) {
          *(undefined4 *)(uVar9 + 8) = 1;
        }
        if (*(int *)(uVar9 + 0xc) != -1) {
          *(undefined4 *)(uVar9 + 0xc) = 2;
        }
        uVar7 = (int)uVar12 + 1;
        uVar12 = (ulonglong)uVar7;
      } while (uVar7 < param_6);
    }
    *(undefined8 *)(param_1 + 0xe) = 0;
    *(undefined8 *)(param_1 + 0x10) = 0;
    uVar12 = uVar13;
    do {
      FUN_140417a60(param_3,(&DAT_1404621a0)[uVar12],param_7,param_8,param_1 + uVar12 + 0xb);
      uVar12 = uVar12 + 1;
    } while (uVar12 != 2);
    if (param_9 == (undefined8 *)0x0) {
      lVar10 = FUN_1403ceab0(&DAT_1404e5218);
      do {
        pcVar2 = *(code **)(lVar10 + 0x10 + uVar13 * 0x18);
        if (pcVar2 == FUN_14035d1b0) {
          while( true ) {
            if (*(longlong *)(param_3 + 0x58) != 0) goto LAB_1403e394d;
            if (*(longlong *)(param_3 + 0x50) == 0) break;
            LOCK();
            bVar14 = *(longlong *)(param_3 + 0x58) == 0;
            if (bVar14) {
              *(longlong *)(param_3 + 0x58) = 1;
            }
            UNLOCK();
            if (bVar14) goto LAB_1403e394d;
          }
        }
        else if (pcVar2 == FUN_14035d200) {
          lVar11 = FUN_1403ce760(param_3 + 0x60);
          if (lVar11 != 0) goto LAB_1403e3ab1;
        }
        else if (pcVar2 == FUN_14035dc50) {
          while( true ) {
            if (*(longlong *)(param_3 + 0x68) != 0) goto LAB_1403e39ef;
            if (*(longlong *)(param_3 + 0x50) == 0) break;
            LOCK();
            bVar14 = *(longlong *)(param_3 + 0x68) == 0;
            if (bVar14) {
              *(longlong *)(param_3 + 0x68) = 1;
            }
            UNLOCK();
            if (bVar14) goto LAB_1403e39ef;
          }
        }
        uVar7 = (int)uVar13 + 1;
        uVar13 = (ulonglong)uVar7;
      } while (uVar7 < 3);
    }
    else {
      _Str1 = (char *)*param_9;
      while (_Str1 != (char *)0x0) {
        if (((*_Str1 == 'o') && (_Str1[1] == 't')) && (_Str1[2] == '\0')) {
          while( true ) {
            if (*(longlong *)(param_3 + 0x58) != 0) goto LAB_1403e394d;
            if (*(longlong *)(param_3 + 0x50) == 0) break;
            LOCK();
            bVar14 = *(longlong *)(param_3 + 0x58) == 0;
            if (bVar14) {
              *(longlong *)(param_3 + 0x58) = 1;
            }
            UNLOCK();
            if (bVar14) {
LAB_1403e394d:
              *(code **)(param_1 + 0xe) = FUN_14035d1b0;
              *(undefined **)(param_1 + 0x10) = &DAT_140470e54;
              return "-glyphs";
            }
          }
        }
        else {
          iVar8 = strcmp(_Str1,"directwrite");
          if (iVar8 == 0) {
            lVar10 = FUN_1403ce760(param_3 + 0x60);
            if (lVar10 != 0) {
LAB_1403e3ab1:
              *(code **)(param_1 + 0xe) = FUN_14035d200;
              *(char **)(param_1 + 0x10) = "directwrite";
              return "c-hant-hk";
            }
          }
          else {
            iVar8 = strcmp(_Str1,"fallback");
            if (iVar8 == 0) {
              while( true ) {
                if (*(longlong *)(param_3 + 0x68) != 0) goto LAB_1403e39ef;
                if (*(longlong *)(param_3 + 0x50) == 0) break;
                LOCK();
                bVar14 = *(longlong *)(param_3 + 0x68) == 0;
                if (bVar14) {
                  *(longlong *)(param_3 + 0x68) = 1;
                }
                UNLOCK();
                if (bVar14) {
LAB_1403e39ef:
                  *(code **)(param_1 + 0xe) = FUN_14035dc50;
                  *(char **)(param_1 + 0x10) = "fallback";
                  return "c-hant-hk";
                }
              }
            }
          }
        }
        puVar1 = param_9 + 1;
        param_9 = param_9 + 1;
        _Str1 = (char *)*puVar1;
      }
    }
  }
  uVar9 = thunk_FUN_1402d9040(uVar9);
  return (char *)(uVar9 & 0xffffffffffffff00);
}

