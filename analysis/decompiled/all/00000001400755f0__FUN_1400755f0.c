// Function: FUN_1400755f0
// Addr: 1400755f0
// Size: 414 bytes


byte FUN_1400755f0(undefined8 param_1,undefined8 *param_2)

{
  byte *pbVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined8 *puVar4;
  byte bVar5;
  byte bVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  undefined1 local_d8 [16];
  undefined1 local_c8 [32];
  undefined1 local_a8 [32];
  char local_88;
  byte local_85;
  int local_84;
  undefined1 local_40 [56];
  
  puVar9 = param_2;
  if (0xf < (ulonglong)param_2[3]) {
    puVar9 = (undefined8 *)*param_2;
  }
  uVar8 = 0;
  uVar10 = 0xcbf29ce484222325;
  if (param_2[2] != 0) {
    do {
      pbVar1 = (byte *)((longlong)puVar9 + uVar8);
      uVar8 = uVar8 + 1;
      uVar10 = (uVar10 ^ *pbVar1) * 0x100000001b3;
    } while (uVar8 < (ulonglong)param_2[2]);
  }
  lVar7 = FUN_1400110a0(&DAT_1404e5368,local_d8,param_2,uVar10);
  puVar4 = DAT_1404e5370;
  puVar9 = *(undefined8 **)(lVar7 + 8);
  if ((puVar9 == (undefined8 *)0x0) || (puVar9 == DAT_1404e5370)) {
    return 1;
  }
  if (*(char *)(puVar9 + 10) == -1) {
    return 0;
  }
  puVar2 = (undefined8 *)*DAT_1404e5370;
  iVar3 = local_84;
  do {
    local_84 = 0;
    if (puVar2 == puVar4) {
LAB_140075743:
      bVar5 = *(byte *)((longlong)puVar9 + 0x53) & 1;
      bVar6 = bVar5 ^ 1;
      if (local_84 != 2) {
        bVar6 = bVar5;
      }
      return bVar6;
    }
    local_84 = iVar3;
    FUN_140016fc0(local_c8,puVar2 + 2);
    FUN_14002f890(local_a8,puVar2 + 6);
    if ((((local_85 & 1) == 0) && ((local_85 & 2) != 0)) && (local_88 == *(char *)(puVar9 + 10))) {
      FUN_140017240(local_40);
      FUN_140017240(local_a8);
      FUN_140017240(local_c8);
      goto LAB_140075743;
    }
    FUN_140017240(local_40);
    FUN_140017240(local_a8);
    FUN_140017240(local_c8);
    puVar2 = (undefined8 *)*puVar2;
    iVar3 = local_84;
  } while( true );
}

