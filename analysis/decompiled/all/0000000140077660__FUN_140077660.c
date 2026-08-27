// Function: FUN_140077660
// Addr: 140077660
// Size: 227 bytes


longlong * FUN_140077660(longlong *param_1,longlong param_2,longlong param_3,undefined8 *param_4)

{
  code *pcVar1;
  undefined8 ***pppuVar2;
  ulonglong uVar3;
  int iVar4;
  longlong *plVar5;
  undefined8 ****ppppuVar6;
  undefined8 *_Buf2;
  ulonglong uVar7;
  bool bVar8;
  undefined8 ***local_58 [2];
  size_t local_48;
  ulonglong local_40;
  
  for (; param_2 != param_3; param_2 = param_2 + 0x48) {
    FUN_140076fd0(local_58,param_2,param_2 + 0x28);
    uVar3 = local_40;
    pppuVar2 = local_58[0];
    _Buf2 = param_4;
    if (0xf < (ulonglong)param_4[3]) {
      _Buf2 = (undefined8 *)*param_4;
    }
    ppppuVar6 = local_58;
    if (0xf < local_40) {
      ppppuVar6 = (undefined8 ****)local_58[0];
    }
    if (local_48 == param_4[2]) {
      if (local_48 == 0) {
        bVar8 = true;
      }
      else {
        iVar4 = memcmp(ppppuVar6,_Buf2,local_48);
        bVar8 = iVar4 == 0;
      }
    }
    else {
      bVar8 = false;
    }
    if (0xf < uVar3) {
      uVar7 = uVar3 + 1;
      ppppuVar6 = (undefined8 ****)pppuVar2;
      if (0xfff < uVar7) {
        ppppuVar6 = (undefined8 ****)pppuVar2[-1];
        if (0x1f < (ulonglong)((longlong)pppuVar2 + (-8 - (longlong)ppppuVar6))) {
          pcVar1 = (code *)swi(0x29);
          (*pcVar1)(5);
          pcVar1 = (code *)swi(3);
          plVar5 = (longlong *)(*pcVar1)();
          return plVar5;
        }
        uVar7 = uVar3 + 0x28;
      }
      thunk_FUN_14028af80(ppppuVar6,uVar7);
    }
    if (bVar8) break;
  }
  *param_1 = param_2;
  return param_1;
}

