// Function: FUN_1404a12b4
// Addr: 1404a12b4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a12b4(byte *param_1)

{
  byte bVar1;
  byte bVar2;
  undefined8 in_RAX;
  int unaff_EBX;
  undefined4 unaff_0000001c;
  byte *pbVar3;
  
  bVar2 = (char)in_RAX + 0x60;
  pbVar3 = (byte *)CONCAT71((int7)((ulonglong)in_RAX >> 8),bVar2);
  *pbVar3 = *pbVar3 ^ bVar2;
  bVar1 = *param_1;
  *param_1 = *param_1 + bVar2;
  *pbVar3 = (*pbVar3 - (char)param_1) - CARRY1(bVar1,bVar2);
  *pbVar3 = *pbVar3 + (char)unaff_EBX;
  *(int *)CONCAT44(unaff_0000001c,unaff_EBX) =
       *(int *)CONCAT44(unaff_0000001c,unaff_EBX) + unaff_EBX;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

