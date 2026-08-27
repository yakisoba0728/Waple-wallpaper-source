// Function: FUN_140061a10
// Addr: 140061a10
// Size: 311 bytes


void FUN_140061a10(longlong param_1,longlong param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined1 local_28 [16];
  
  if (*(char *)(param_2 + 8) == '\a') {
    puVar1 = *(undefined8 **)(param_1 + 8);
    for (puVar2 = (undefined8 *)*puVar1; puVar2 != puVar1; puVar2 = (undefined8 *)*puVar2) {
      if (*(char *)(param_2 + 8) == '\a') {
        puVar6 = puVar2 + 2;
        if (0xf < (ulonglong)puVar2[5]) {
          puVar6 = (undefined8 *)puVar2[2];
        }
        lVar4 = FUN_140087490(param_2,puVar6,puVar2[4] + (longlong)puVar6);
        if (lVar4 == 0) {
          lVar4 = FUN_140084ac0();
        }
        if (*(char *)(lVar4 + 8) == '\a') {
          puVar6 = puVar2 + 2;
          if (0xf < (ulonglong)puVar2[5]) {
            puVar6 = (undefined8 *)puVar2[2];
          }
          lVar4 = FUN_140087490(param_2,puVar6,puVar2[4] + (longlong)puVar6);
          if (lVar4 == 0) {
            lVar4 = FUN_140084ac0();
          }
          lVar5 = FUN_140087490(lVar4,&DAT_140477f34,&DAT_140477f38);
          if (lVar5 == 0) {
            lVar5 = FUN_140084ac0();
          }
          if (*(char *)(lVar5 + 8) == '\x05') {
            lVar4 = FUN_140087490(lVar4,&DAT_140477f34,&DAT_140477f38);
            if (lVar4 == 0) {
              lVar4 = FUN_140084ac0();
            }
            cVar3 = FUN_140086300(lVar4);
            if (cVar3 != '\0') {
              FUN_140032bc0(param_3,local_28,puVar2 + 2);
            }
          }
        }
      }
    }
  }
  return;
}

