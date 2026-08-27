// Function: FUN_1403bbee0
// Addr: 1403bbee0
// Size: 583 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_1403bbee0(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  
  puVar6 = (undefined4 *)_calloc_base(1,0xd8);
  if (puVar6 == (undefined4 *)0x0) {
    puVar6 = &DAT_1404dee58;
  }
  else {
    FUN_1404217a0(puVar6,0,0xd8);
    *puVar6 = 1;
    *(undefined1 *)(puVar6 + 1) = 1;
    *(undefined8 *)(puVar6 + 2) = 0;
    if (DAT_1404dee5c != '\0') {
      DAT_1404dee5c = '\0';
    }
    if (DAT_1404dee58 != 0) {
      LOCK();
      DAT_1404dee58 = DAT_1404dee58 + 1;
      UNLOCK();
    }
    *(int **)(puVar6 + 4) = &DAT_1404dee58;
    puVar1 = PTR_FUN_1404dee78;
    *(undefined **)(puVar6 + 6) = PTR_FUN_1404dee70;
    *(undefined **)(puVar6 + 8) = puVar1;
    puVar1 = PTR_LAB_1404dee88;
    *(undefined **)(puVar6 + 10) = PTR_LAB_1404dee80;
    *(undefined **)(puVar6 + 0xc) = puVar1;
    puVar1 = PTR_FUN_1404dee98;
    *(undefined **)(puVar6 + 0xe) = PTR_LAB_1404dee90;
    *(undefined **)(puVar6 + 0x10) = puVar1;
    puVar1 = PTR_FUN_1404deea8;
    *(undefined **)(puVar6 + 0x12) = PTR_FUN_1404deea0;
    *(undefined **)(puVar6 + 0x14) = puVar1;
    uVar2 = uRam00000001404deeb8;
    *(undefined8 *)(puVar6 + 0x16) = _DAT_1404deeb0;
    *(undefined8 *)(puVar6 + 0x18) = uVar2;
    uVar2 = uRam00000001404deec8;
    *(undefined8 *)(puVar6 + 0x1a) = _DAT_1404deec0;
    *(undefined8 *)(puVar6 + 0x1c) = uVar2;
    uVar5 = uRam00000001404deedc;
    uVar4 = uRam00000001404deed8;
    uVar3 = uRam00000001404deed4;
    puVar6[0x1e] = _DAT_1404deed0;
    puVar6[0x1f] = uVar3;
    puVar6[0x20] = uVar4;
    puVar6[0x21] = uVar5;
    uVar2 = uRam00000001404deee8;
    *(undefined8 *)(puVar6 + 0x22) = _DAT_1404deee0;
    *(undefined8 *)(puVar6 + 0x24) = uVar2;
  }
  if (*(char *)(puVar6 + 1) != '\0') {
    if (*(code **)(puVar6 + 0x26) != (code *)0x0) {
      (**(code **)(puVar6 + 0x26))(*(undefined8 *)(puVar6 + 0x16));
    }
    *(undefined1 **)(puVar6 + 6) = &LAB_1403de4e0;
    *(undefined8 *)(puVar6 + 0x16) = 0;
    *(undefined8 *)(puVar6 + 0x26) = 0;
  }
  if (*(char *)(puVar6 + 1) != '\0') {
    if (*(code **)(puVar6 + 0x2a) != (code *)0x0) {
      (**(code **)(puVar6 + 0x2a))(*(undefined8 *)(puVar6 + 0x1a));
    }
    *(undefined1 **)(puVar6 + 10) = &LAB_1403de890;
    *(undefined8 *)(puVar6 + 0x1a) = 0;
    *(undefined8 *)(puVar6 + 0x2a) = 0;
  }
  if (*(char *)(puVar6 + 1) != '\0') {
    if (*(code **)(puVar6 + 0x2c) != (code *)0x0) {
      (**(code **)(puVar6 + 0x2c))(*(undefined8 *)(puVar6 + 0x1c));
    }
    *(undefined1 **)(puVar6 + 0xc) = &LAB_1403de900;
    *(undefined8 *)(puVar6 + 0x1c) = 0;
    *(undefined8 *)(puVar6 + 0x2c) = 0;
  }
  if (*(char *)(puVar6 + 1) != '\0') {
    if (*(code **)(puVar6 + 0x2e) != (code *)0x0) {
      (**(code **)(puVar6 + 0x2e))(*(undefined8 *)(puVar6 + 0x1e));
    }
    *(undefined1 **)(puVar6 + 0xe) = &LAB_1403de990;
    *(undefined8 *)(puVar6 + 0x1e) = 0;
    *(undefined8 *)(puVar6 + 0x2e) = 0;
  }
  if (*(char *)(puVar6 + 1) != '\0') {
    if (*(code **)(puVar6 + 0x30) != (code *)0x0) {
      (**(code **)(puVar6 + 0x30))(*(undefined8 *)(puVar6 + 0x20));
    }
    *(code **)(puVar6 + 0x10) = FUN_1403de550;
    *(undefined8 *)(puVar6 + 0x20) = 0;
    *(undefined8 *)(puVar6 + 0x30) = 0;
  }
  if (*(char *)(puVar6 + 1) != '\0') {
    if (*(code **)(puVar6 + 0x32) != (code *)0x0) {
      (**(code **)(puVar6 + 0x32))(*(undefined8 *)(puVar6 + 0x22));
    }
    *(undefined1 **)(puVar6 + 0x12) = &LAB_1403de6e0;
    *(undefined8 *)(puVar6 + 0x22) = 0;
    *(undefined8 *)(puVar6 + 0x32) = 0;
  }
  if (*(char *)(puVar6 + 1) != '\0') {
    *(undefined1 *)(puVar6 + 1) = 0;
  }
  FUN_14028b410(&LAB_1403c4e00);
  return puVar6;
}

