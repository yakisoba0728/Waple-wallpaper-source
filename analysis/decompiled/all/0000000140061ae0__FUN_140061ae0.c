// Function: FUN_140061ae0
// Addr: 140061ae0
// Size: 125 bytes


void FUN_140061ae0(longlong param_1,longlong param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined1 auStack_28 [16];
  
  if (*(char *)(param_2 + 8) == '\a') {
    puVar1 = *(undefined8 **)(param_1 + 8);
    for (puVar2 = (undefined8 *)*puVar1; puVar2 != puVar1; puVar2 = (undefined8 *)*puVar2) {
      if (*(char *)(param_2 + 8) == '\a') {
        puVar6 = puVar2 + 2;
        if (0xf < (ulonglong)puVar2[5]) {
          puVar6 = (undefined8 *)puVar2[2];
        }
        lVar4 = func_0x000140087560(param_2,puVar6,puVar2[4] + (longlong)puVar6);
        if (lVar4 == 0) {
          lVar4 = FUN_140084b90();
        }
        if (*(char *)(lVar4 + 8) == '\a') {
          puVar6 = puVar2 + 2;
          if (0xf < (ulonglong)puVar2[5]) {
            puVar6 = (undefined8 *)puVar2[2];
          }
          lVar4 = func_0x000140087560(param_2,puVar6,puVar2[4] + (longlong)puVar6);
          if (lVar4 == 0) {
            lVar4 = FUN_140084b90();
          }
          lVar5 = func_0x000140087560(lVar4,&UNK_140478004,&UNK_140478008);
          if (lVar5 == 0) {
            lVar5 = FUN_140084b90();
          }
          if (*(char *)(lVar5 + 8) == '\x05') {
            lVar4 = func_0x000140087560(lVar4,&UNK_140478004,&UNK_140478008);
            if (lVar4 == 0) {
              lVar4 = FUN_140084b90();
            }
            cVar3 = func_0x0001400863d0(lVar4);
            if (cVar3 != '\0') {
              func_0x000140032c90(param_3,auStack_28,puVar2 + 2);
            }
          }
        }
      }
    }
  }
  return;
}

