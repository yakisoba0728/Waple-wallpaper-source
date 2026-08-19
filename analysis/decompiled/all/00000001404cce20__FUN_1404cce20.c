// Function: FUN_1404cce20
// Addr: 1404cce20
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404cce20(void)

{
  undefined1 *puVar1;
  byte *pbVar2;
  byte bVar3;
  byte bVar4;
  uint in_EAX;
  undefined4 in_register_00000004;
  longlong unaff_RDI;
  
  puVar1 = (undefined1 *)(CONCAT44(in_register_00000004,in_EAX) + 0x35);
  *puVar1 = *puVar1;
  bVar4 = (byte)in_EAX;
  *(byte *)CONCAT44(in_register_00000004,in_EAX) =
       *(char *)CONCAT44(in_register_00000004,in_EAX) + bVar4;
  *(uint *)(unaff_RDI + 0xe) = *(uint *)(unaff_RDI + 0xe) & in_EAX;
  pbVar2 = (byte *)(unaff_RDI + -0xc);
  bVar3 = *pbVar2;
  *pbVar2 = *pbVar2 + bVar4;
  *(byte *)CONCAT44(in_register_00000004,in_EAX) =
       *(char *)CONCAT44(in_register_00000004,in_EAX) + bVar4 + CARRY1(bVar3,bVar4);
  *(uint *)CONCAT44(in_register_00000004,in_EAX) =
       *(int *)CONCAT44(in_register_00000004,in_EAX) + in_EAX + (uint)(bVar4 < 0xe4);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

