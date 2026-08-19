// Function: FUN_1404c60b4
// Addr: 1404c60b4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c60b4(int param_1,char *param_2,byte param_3)

{
  byte bVar1;
  char in_AL;
  char cVar2;
  undefined7 in_register_00000001;
  byte *pbVar3;
  uint *unaff_RBX;
  uint unaff_EBP;
  
  pbVar3 = (byte *)(ulonglong)(uint)(param_1 + iRam000000019fe860e9);
  bVar1 = *pbVar3;
  *pbVar3 = *pbVar3 + param_3;
  cVar2 = in_AL + '\x01' + CARRY1(bVar1,param_3);
  *param_2 = *param_2 + (char)param_2;
  *(char *)CONCAT71(in_register_00000001,cVar2) =
       *(char *)CONCAT71(in_register_00000001,cVar2) + cVar2;
  *unaff_RBX = *unaff_RBX & unaff_EBP;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

