// Function: FUN_14016ff50
// Addr: 14016ff50
// Size: 916 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_14016ff50(char *param_1)

{
  ulonglong uVar1;
  undefined1 *puVar2;
  code *pcVar3;
  char *pcVar4;
  int iVar5;
  size_t sVar6;
  char *pcVar7;
  ulonglong uVar8;
  undefined1 *puVar9;
  char *pcVar10;
  char *pcVar11;
  char *_Buf2;
  ulonglong *puVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  char *pcVar15;
  bool bVar16;
  undefined8 uStack_180;
  undefined1 auStack_178 [32];
  longlong local_158 [9];
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 local_100;
  ulonglong local_f8 [5];
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  ulonglong local_b8 [4];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  ulonglong local_78 [7];
  
  puVar14 = auStack_178;
  pcVar15 = (char *)0x0;
  puVar13 = auStack_178;
  if ((*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x130) < DAT_1404e963c) &&
     (FUN_14028b140(&DAT_1404e963c), puVar13 = auStack_178, DAT_1404e963c == -1)) {
    uStack_90 = 0;
    local_158[6] = 4;
    local_158[5] = 0;
    uStack_110 = 0;
    local_f8[1] = 0;
    uStack_d0 = 0;
    local_b8[1] = 0;
    local_78[1] = 0;
    local_158[7] = 0xf;
    local_158[4] = (longlong)DAT_14048a800;
    local_108 = 4;
    local_100 = 0xf;
    local_158[8] = (longlong)DAT_14048a7f8;
    local_f8[2] = 4;
    local_f8[3] = 0xf;
    local_f8[0] = (ulonglong)DAT_14048a830;
    local_c8 = 4;
    local_c0 = 0xf;
    local_f8[4] = (ulonglong)DAT_14048a828;
    local_b8[2] = 4;
    local_b8[3] = 0xf;
    local_b8[0] = (ulonglong)DAT_14048a820;
    local_88 = 5;
    local_80 = 0xf;
    local_98 = (ulonglong)CONCAT14(DAT_140488afc,DAT_140488af8);
    local_78[2] = 4;
    local_78[3] = 0xf;
    local_78[0] = (ulonglong)DAT_14048a818;
    _DAT_1404e9640 = 0;
    DAT_1404e9648 = (char *)0x0;
    _DAT_1404e9650 = 0;
    DAT_1404e9648 = (char *)FUN_14028af20(0x30);
    *(char **)DAT_1404e9648 = DAT_1404e9648;
    *(char **)(DAT_1404e9648 + 8) = DAT_1404e9648;
    DAT_1404e9658 = 0;
    _DAT_1404e9660 = 0;
    uRam00000001404e9668 = 0;
    _DAT_1404e9670 = 7;
    _DAT_1404e9678 = 8;
    _DAT_1404e9640 = 0x3f800000;
    FUN_140037600(&DAT_1404e9658,0x10,DAT_1404e9648);
    puVar12 = (ulonglong *)(local_158 + 4);
    goto LAB_1401700d2;
  }
  do {
    *(undefined8 *)(puVar13 + 0x30) = 0;
    *(undefined8 *)(puVar13 + 0x38) = 0;
    *(undefined8 *)(puVar13 + 0x20) = 0;
    *(undefined8 *)(puVar13 + 0x28) = 0;
    *(undefined8 *)(puVar13 + -8) = 0x14016ffa9;
    sVar6 = strlen(param_1);
    *(undefined8 *)(puVar13 + -8) = 0x14016ffb9;
    FUN_140017480(puVar13 + 0x20,param_1,sVar6);
    pcVar4 = DAT_1404e9648;
    uVar1 = *(ulonglong *)(puVar13 + 0x38);
    puVar2 = *(undefined1 **)(puVar13 + 0x20);
    pcVar7 = *(char **)(puVar13 + 0x30);
    uVar8 = 0xcbf29ce484222325;
    puVar9 = puVar13 + 0x20;
    if (0xf < uVar1) {
      puVar9 = puVar2;
    }
    pcVar10 = pcVar15;
    if (pcVar7 != (char *)0x0) {
      do {
        pcVar11 = pcVar10 + 1;
        uVar8 = (uVar8 ^ (byte)pcVar10[(longlong)puVar9]) * 0x100000001b3;
        pcVar10 = pcVar11;
      } while (pcVar11 < pcVar7);
    }
    pcVar10 = *(char **)(DAT_1404e9658 + 8 + (uVar8 & _DAT_1404e9670) * 0x10);
    param_1 = pcVar15;
    if (pcVar10 != DAT_1404e9648) {
      pcVar11 = *(char **)(DAT_1404e9658 + (uVar8 & _DAT_1404e9670) * 0x10);
      do {
        _Buf2 = pcVar10 + 0x10;
        if (0xf < *(ulonglong *)(pcVar10 + 0x28)) {
          _Buf2 = *(char **)_Buf2;
        }
        puVar9 = puVar13 + 0x20;
        if (0xf < uVar1) {
          puVar9 = puVar2;
        }
        if (pcVar7 == *(char **)(pcVar10 + 0x20)) {
          param_1 = pcVar10;
          if (pcVar7 == (char *)0x0) break;
          *(undefined8 *)(puVar13 + -8) = 0x14017005f;
          iVar5 = memcmp(puVar9,_Buf2,(size_t)pcVar7);
          if (iVar5 == 0) break;
        }
        param_1 = pcVar15;
        if (pcVar10 == pcVar11) break;
        pcVar10 = *(char **)(pcVar10 + 8);
      } while( true );
    }
    pcVar7 = pcVar4;
    if (param_1 != (char *)0x0) {
      pcVar7 = param_1;
    }
    bVar16 = pcVar7 != pcVar4;
    puVar12 = (ulonglong *)CONCAT71((int7)((ulonglong)pcVar4 >> 8),bVar16);
    if (uVar1 < 0x10) {
      return bVar16;
    }
    uVar8 = uVar1 + 1;
    puVar9 = puVar2;
    if (uVar8 < 0x1000) goto LAB_1401700ac;
    puVar9 = *(undefined1 **)(puVar2 + -8);
    if (puVar2 + (-8 - (longlong)puVar9) < (undefined1 *)0x20) {
      uVar8 = uVar1 + 0x28;
LAB_1401700ac:
      *(undefined8 *)(puVar13 + -8) = 0x1401700b4;
      thunk_FUN_14028af80(puVar9,uVar8);
      return bVar16;
    }
    pcVar3 = (code *)swi(0x29);
    (*pcVar3)(5);
    puVar14 = puVar13 + 8;
LAB_1401700d2:
    do {
      *(undefined8 *)(puVar14 + -8) = 0x1401700e5;
      FUN_140032bc0(&DAT_1404e9640,local_78 + 4,puVar12);
      puVar12 = puVar12 + 4;
    } while (puVar12 != local_78 + 4);
    *(undefined8 *)(puVar14 + -8) = 0x1401700fb;
    FUN_140017240(local_78);
    *(undefined8 *)(puVar14 + -8) = 0x140170104;
    FUN_140017240(&local_98);
    *(undefined8 *)(puVar14 + -8) = 0x14017010d;
    FUN_140017240(local_b8);
    *(undefined8 *)(puVar14 + -8) = 0x140170116;
    FUN_140017240(local_f8 + 4);
    *(undefined8 *)(puVar14 + -8) = 0x14017011f;
    FUN_140017240(local_f8);
    *(undefined8 *)(puVar14 + -8) = 0x140170129;
    FUN_140017240(puVar14 + 0x60);
    *(undefined8 *)(puVar14 + -8) = 0x140170133;
    FUN_140017240(puVar14 + 0x40);
    *(undefined8 *)(puVar14 + -8) = 0x14017013f;
    FUN_14028b410(FUN_140424e20);
    *(undefined8 *)(puVar14 + -8) = 0x14017014b;
    _Init_thread_footer(&DAT_1404e963c);
    puVar13 = puVar14;
  } while( true );
}

