// Function: FUN_140315270
// Addr: 140315270
// Size: 158 bytes


ulonglong FUN_140315270(longlong *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  code *pcVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  puVar1 = *(undefined8 **)(*param_1 + 0x300);
  lVar3 = FUN_1402f0420(*(undefined8 *)(*(longlong *)(*param_1 + 0x90) + 8),"pshinter");
  if (((lVar3 == 0) || (puVar1 == (undefined8 *)0x0)) ||
     (pcVar2 = (code *)*puVar1, pcVar2 == (code *)0x0)) {
    lVar3 = 0;
  }
  else {
    lVar3 = (*pcVar2)(lVar3);
  }
  uVar4 = FUN_1402f4580(*param_1,param_2);
  if (((int)uVar4 == 0) && (lVar3 != 0)) {
    (**(code **)(lVar3 + 8))
              (*(undefined8 *)param_1[7],*(undefined4 *)((longlong)param_1 + 0x1c),(int)param_1[4],0
               ,0);
    uVar4 = uVar4 & 0xffffffff;
  }
  return uVar4;
}

