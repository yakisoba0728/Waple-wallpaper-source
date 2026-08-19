// Function: FUN_1404af9b8
// Addr: 1404af9b8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404af9b8(uint param_1,longlong param_2)

{
  byte *pbVar1;
  byte bVar2;
  char cVar3;
  undefined4 in_EAX;
  undefined3 uVar4;
  undefined4 in_register_00000004;
  longlong unaff_RBX;
  uint *unaff_RDI;
  
  *(uint *)CONCAT44(in_register_00000004,in_EAX) =
       *(uint *)CONCAT44(in_register_00000004,in_EAX) & param_1;
  uVar4 = (undefined3)((uint)in_EAX >> 8);
  bVar2 = (char)in_EAX + *(char *)CONCAT44(in_register_00000004,in_EAX);
  pbVar1 = (byte *)(param_2 + CONCAT44(in_register_00000004,CONCAT31(uVar4,bVar2)) * 4);
  *pbVar1 = *pbVar1 | (byte)((ulonglong)param_2 >> 8);
  cVar3 = *(char *)(unaff_RBX + (ulonglong)bVar2);
  out((short)param_2,CONCAT31(uVar4,cVar3 + (CONCAT31(uVar4,cVar3) < *unaff_RDI)));
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

