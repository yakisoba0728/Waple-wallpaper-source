// Function: FUN_1404b84dc
// Addr: 1404b84dc
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b84dc(char *param_1,int param_2)

{
  int iVar1;
  byte bVar2;
  undefined8 in_RAX;
  byte *pbVar3;
  
  bVar2 = (char)in_RAX + 0x60;
  pbVar3 = (byte *)CONCAT71((int7)((ulonglong)in_RAX >> 8),bVar2);
  iVar1 = *(int *)(pbVar3 + 2);
  *pbVar3 = *pbVar3 ^ bVar2;
  *param_1 = *param_1 + bVar2;
  func_0x0001189484f7(param_1,param_2 + iVar1);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

