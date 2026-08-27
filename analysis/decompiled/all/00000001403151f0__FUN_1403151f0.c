// Function: FUN_1403151f0
// Addr: 1403151f0
// Size: 117 bytes


void FUN_1403151f0(longlong *param_1)

{
  undefined8 *puVar1;
  code *pcVar2;
  longlong lVar3;
  
  if (*(longlong *)param_1[7] != 0) {
    puVar1 = *(undefined8 **)(*param_1 + 0x300);
    lVar3 = FUN_1402f0420(*(undefined8 *)(*(longlong *)(*param_1 + 0x90) + 8),"pshinter");
    if (((lVar3 != 0) && (puVar1 != (undefined8 *)0x0)) &&
       (pcVar2 = (code *)*puVar1, pcVar2 != (code *)0x0)) {
      lVar3 = (*pcVar2)(lVar3);
      if (lVar3 != 0) {
        (**(code **)(lVar3 + 0x10))(*(undefined8 *)param_1[7]);
      }
    }
    *(undefined8 *)param_1[7] = 0;
  }
  return;
}

