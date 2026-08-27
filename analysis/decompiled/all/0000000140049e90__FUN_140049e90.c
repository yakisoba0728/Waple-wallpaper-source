// Function: FUN_140049e90
// Addr: 140049e90
// Size: 426 bytes


longlong FUN_140049e90(longlong *param_1,undefined1 *param_2,ulonglong param_3)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  size_t sVar4;
  ulonglong uVar5;
  ulonglong _Count;
  
  if ((longlong)param_3 < 1) {
    return 0;
  }
  _Count = param_3;
  if (param_1[0xd] == 0) {
    if ((*(longlong *)param_1[7] != 0) && (iVar3 = *(int *)param_1[10], iVar3 != 0)) {
      uVar5 = param_3;
      if ((ulonglong)(longlong)iVar3 < param_3) {
        uVar5 = (longlong)iVar3;
      }
      FUN_1404210f0(param_2,*(longlong *)param_1[7],uVar5);
      param_2 = param_2 + uVar5;
      _Count = param_3 - uVar5;
      *(int *)param_1[10] = *(int *)param_1[10] - (int)uVar5;
      *(longlong *)param_1[7] = *(longlong *)param_1[7] + (longlong)(int)uVar5;
    }
    if (param_1[0x10] != 0) {
      if (*(longlong **)param_1[3] == param_1 + 0xe) {
        lVar1 = param_1[0x11];
        lVar2 = param_1[0x12];
        *(longlong *)param_1[3] = lVar1;
        *(longlong *)param_1[7] = lVar1;
        *(int *)param_1[10] = (int)lVar2 - (int)lVar1;
      }
      while (0xfff < _Count) {
        sVar4 = fread(param_2,1,0xfff,(FILE *)param_1[0x10]);
        _Count = _Count - sVar4;
        if (sVar4 != 0xfff) goto LAB_14004a024;
        param_2 = param_2 + 0xfff;
      }
      if (_Count != 0) {
        sVar4 = fread(param_2,1,_Count,(FILE *)param_1[0x10]);
        _Count = _Count - sVar4;
      }
    }
  }
  else {
    do {
      if ((*(longlong *)param_1[7] == 0) || (iVar3 = *(int *)param_1[10], iVar3 < 1)) {
        iVar3 = (**(code **)(*param_1 + 0x38))(param_1);
        if (iVar3 == -1) break;
        *param_2 = (char)iVar3;
        lVar1 = -1;
        uVar5 = 1;
      }
      else {
        uVar5 = _Count;
        if ((longlong)iVar3 <= (longlong)_Count) {
          uVar5 = (longlong)iVar3;
        }
        FUN_1404210f0(param_2,*(longlong *)param_1[7],uVar5);
        lVar1 = -uVar5;
        *(int *)param_1[10] = *(int *)param_1[10] - (int)uVar5;
        *(longlong *)param_1[7] = *(longlong *)param_1[7] + (longlong)(int)uVar5;
      }
      _Count = _Count + lVar1;
      param_2 = param_2 + uVar5;
    } while (0 < (longlong)_Count);
  }
LAB_14004a024:
  return param_3 - _Count;
}

