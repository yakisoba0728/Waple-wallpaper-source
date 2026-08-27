// Function: FUN_140321e80
// Addr: 140321e80
// Size: 135 bytes


ulonglong FUN_140321e80(longlong *param_1)

{
  undefined8 *puVar1;
  code *pcVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  uVar3 = FUN_1402f4580(*param_1);
  uVar5 = uVar3 & 0xffffffff;
  if ((int)uVar3 == 0) {
    puVar1 = *(undefined8 **)(*param_1 + 0x1d8);
    lVar4 = FUN_1402f0420(*(undefined8 *)(*(longlong *)(*param_1 + 0x90) + 8),"pshinter");
    uVar3 = uVar5;
    if ((((lVar4 != 0) && (puVar1 != (undefined8 *)0x0)) &&
        (pcVar2 = (code *)*puVar1, pcVar2 != (code *)0x0)) && (lVar4 = (*pcVar2)(lVar4), lVar4 != 0)
       ) {
      (**(code **)(lVar4 + 8))
                (*(undefined8 *)param_1[7],*(undefined4 *)((longlong)param_1 + 0x1c),(int)param_1[4]
                 ,0,0);
    }
  }
  return uVar3;
}

