// Function: FUN_1404c3164
// Addr: 1404c3164
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c3164(uint param_1,char param_2)

{
  byte *pbVar1;
  uint *puVar2;
  int in_EAX;
  undefined4 in_register_00000004;
  byte bVar3;
  char *unaff_RDI;
  
  *unaff_RDI = *unaff_RDI + param_2;
  puVar2 = (uint *)(CONCAT44(in_register_00000004,in_EAX) + -100 +
                   CONCAT44(in_register_00000004,in_EAX));
  *puVar2 = *puVar2 ^ param_1;
  *(int *)CONCAT44(in_register_00000004,in_EAX) =
       *(int *)CONCAT44(in_register_00000004,in_EAX) - in_EAX;
  bVar3 = (byte)param_1;
  *(byte *)CONCAT44(in_register_00000004,in_EAX) =
       *(byte *)CONCAT44(in_register_00000004,in_EAX) | bVar3;
  pbVar1 = (byte *)(CONCAT44(in_register_00000004,in_EAX) + 0x80808b0);
  *pbVar1 = *pbVar1 | (byte)(param_1 >> 8);
  *(byte *)CONCAT44(in_register_00000004,in_EAX) =
       *(byte *)CONCAT44(in_register_00000004,in_EAX) | bVar3;
  *(byte *)CONCAT44(in_register_00000004,in_EAX) =
       *(byte *)CONCAT44(in_register_00000004,in_EAX) | bVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

