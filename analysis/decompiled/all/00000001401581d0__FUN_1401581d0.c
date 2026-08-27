// Function: FUN_1401581d0
// Addr: 1401581d0
// Size: 124 bytes


void FUN_1401581d0(longlong param_1,longlong param_2,longlong *param_3)

{
  char cVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  puVar2 = DAT_1404e9340;
  if (param_3 != (longlong *)0x0) {
    cVar1 = *(char *)(*(int *)(param_2 + 4) + param_1);
    for (puVar4 = DAT_1404e9338; puVar4 != puVar2; puVar4 = puVar4 + 5) {
      if (*(char *)(puVar4 + 4) == cVar1) {
        puVar3 = puVar4;
        if (0xf < (ulonglong)puVar4[3]) {
          puVar3 = (undefined8 *)*puVar4;
        }
        if (*param_3 != 0) {
          (*(code *)param_3[1])(*param_3,puVar3,puVar4[2] + (longlong)puVar3);
        }
      }
    }
  }
  return;
}

