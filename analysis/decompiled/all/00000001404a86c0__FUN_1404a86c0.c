// Function: FUN_1404a86c0
// Addr: 1404a86c0
// Size: 1 bytes


int FUN_1404a86c0(longlong param_1)

{
  int iVar1;
  char cVar2;
  undefined8 in_RAX;
  int *piVar3;
  
  cVar2 = (char)in_RAX + -0x7e;
  piVar3 = (int *)CONCAT71((int7)((ulonglong)in_RAX >> 8),cVar2);
  *(char *)piVar3 = (char)*piVar3 + cVar2;
  uRam00000001a84f86cc = uRam00000001a84f86cc & (uint)piVar3;
  iVar1 = *piVar3;
  *(undefined1 *)(param_1 + 0xb) = *(undefined1 *)(param_1 + 0xb);
  return (uint)piVar3 + iVar1;
}

