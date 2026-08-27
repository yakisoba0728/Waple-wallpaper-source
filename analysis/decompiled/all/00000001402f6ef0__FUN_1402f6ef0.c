// Function: FUN_1402f6ef0
// Addr: 1402f6ef0
// Size: 184 bytes


bool FUN_1402f6ef0(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = -param_1;
  if (-param_1 < 0) {
    iVar1 = param_1;
  }
  iVar2 = -param_2;
  if (-param_2 < 0) {
    iVar2 = param_2;
  }
  if (iVar2 < iVar1) {
    iVar1 = (iVar2 * 3 >> 3) + iVar1;
  }
  else {
    iVar1 = (iVar1 * 3 >> 3) + iVar2;
  }
  iVar2 = -param_3;
  if (-param_3 < 0) {
    iVar2 = param_3;
  }
  iVar3 = -param_4;
  if (-param_4 < 0) {
    iVar3 = param_4;
  }
  if (iVar3 < iVar2) {
    iVar2 = (iVar3 * 3 >> 3) + iVar2;
  }
  else {
    iVar2 = (iVar2 * 3 >> 3) + iVar3;
  }
  iVar3 = -(param_1 + param_3);
  if (iVar3 < 0) {
    iVar3 = param_1 + param_3;
  }
  iVar4 = -(param_2 + param_4);
  if (iVar4 < 0) {
    iVar4 = param_2 + param_4;
  }
  if (iVar4 < iVar3) {
    iVar3 = (iVar4 * 3 >> 3) + iVar3;
    return (iVar2 - iVar3) + iVar1 < iVar3 >> 4;
  }
  iVar4 = (iVar3 * 3 >> 3) + iVar4;
  return (iVar2 - iVar4) + iVar1 < iVar4 >> 4;
}

