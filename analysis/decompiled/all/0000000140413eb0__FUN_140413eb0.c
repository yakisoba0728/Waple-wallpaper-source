// Function: FUN_140413eb0
// Addr: 140413eb0
// Size: 220 bytes


undefined4 *
FUN_140413eb0(undefined8 param_1,uint param_2,int param_3,undefined8 param_4,code *param_5)

{
  char cVar1;
  undefined4 *puVar2;
  
  if (param_2 < 0x80000000) {
    puVar2 = (undefined4 *)_calloc_base(1,0x30);
    if (puVar2 != (undefined4 *)0x0) {
      *(undefined2 *)((longlong)puVar2 + 5) = 0;
      *(undefined1 *)((longlong)puVar2 + 7) = 0;
      *puVar2 = 0;
      *(undefined1 *)(puVar2 + 1) = 0;
      *(undefined8 *)(puVar2 + 2) = 0;
      *(undefined8 *)(puVar2 + 4) = 0;
      *(undefined8 *)(puVar2 + 6) = 0;
      *(undefined8 *)(puVar2 + 8) = 0;
      *(undefined8 *)(puVar2 + 10) = 0;
      *puVar2 = 1;
      *(undefined1 *)(puVar2 + 1) = 1;
      *(undefined8 *)(puVar2 + 2) = 0;
      *(code **)(puVar2 + 10) = param_5;
      *(undefined8 *)(puVar2 + 4) = param_1;
      puVar2[6] = param_2;
      puVar2[7] = param_3;
      *(undefined8 *)(puVar2 + 8) = param_4;
      if (param_3 == 0) {
        puVar2[7] = 1;
        cVar1 = FUN_14040ed10(puVar2);
        if (cVar1 == '\0') {
          FUN_140414150(puVar2);
          return (undefined4 *)0x0;
        }
      }
      return puVar2;
    }
  }
  if (param_5 != (code *)0x0) {
    (*param_5)(param_4);
  }
  return (undefined4 *)0x0;
}

