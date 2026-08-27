// Function: FUN_140030b30
// Addr: 140030b30
// Size: 299 bytes


undefined8 * FUN_140030b30(longlong *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  char cVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  uint uVar6;
  undefined8 *puVar7;
  undefined8 *local_58;
  uint local_50;
  
  puVar1 = (undefined8 *)*param_1;
  puVar7 = (undefined8 *)puVar1[1];
  puVar5 = puVar7;
  puVar4 = puVar1;
  if (*(char *)((longlong)puVar7 + 0x19) == '\0') {
    do {
      puVar7 = puVar5;
      cVar2 = FUN_140038c30(puVar7 + 4,param_2);
      if (-1 < cVar2) {
        puVar5 = (undefined8 *)*puVar7;
        puVar4 = puVar7;
      }
      else {
        puVar5 = (undefined8 *)puVar7[2];
      }
      uVar6 = (uint)(-1 < cVar2);
    } while (*(char *)((longlong)puVar5 + 0x19) == '\0');
  }
  else {
    uVar6 = 0;
  }
  if ((*(char *)((longlong)puVar4 + 0x19) != '\0') ||
     (cVar2 = FUN_140038c30(param_2,puVar4 + 4), cVar2 < '\0')) {
    if (param_1[1] == 0x1ffffffffffffff) {
                    /* WARNING: Subroutine does not return */
      FUN_14003a750();
    }
    plVar3 = (longlong *)FUN_14028af20(0x80);
    FUN_140016fc0(plVar3 + 4,param_2);
    plVar3[8] = 0;
    plVar3[9] = 0;
    plVar3[10] = 0;
    plVar3[0xb] = 0xf;
    *(undefined1 *)(plVar3 + 8) = 0;
    plVar3[0xc] = 0;
    plVar3[0xd] = 0;
    plVar3[0xe] = 0;
    plVar3[0xf] = 0xf;
    *(undefined1 *)(plVar3 + 0xc) = 0;
    *plVar3 = (longlong)puVar1;
    plVar3[1] = (longlong)puVar1;
    plVar3[2] = (longlong)puVar1;
    *(undefined2 *)(plVar3 + 3) = 0;
    local_58 = puVar7;
    local_50 = uVar6;
    puVar4 = (undefined8 *)FUN_1400371e0(param_1,&local_58,plVar3);
  }
  return puVar4 + 8;
}

