// Function: FUN_1404aba18
// Addr: 1404aba18
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404aba18(int *param_1,undefined8 param_2)

{
  byte bVar1;
  uint uVar2;
  byte bVar4;
  byte *in_RAX;
  uint *puVar3;
  char cVar5;
  undefined7 uVar6;
  int unaff_EBX;
  byte *unaff_RDI;
  
  uVar6 = (undefined7)((ulonglong)param_2 >> 8);
  *param_1 = *param_1 + unaff_EBX;
  puVar3 = (uint *)CONCAT71((int7)((ulonglong)in_RAX >> 8),(byte)in_RAX | *in_RAX);
  uVar2 = (uint)puVar3;
  *param_1 = *param_1 - uVar2;
  uVar2 = uVar2 & *puVar3 | 0x9e00bf0;
  *unaff_RDI = *unaff_RDI << 1 | (char)*unaff_RDI < '\0';
  cVar5 = (char)param_2 + *(char *)((ulonglong)uVar2 + 1);
  bVar4 = (byte)(uVar2 >> 8);
  *(byte *)CONCAT71(uVar6,cVar5) = *(char *)CONCAT71(uVar6,cVar5) + bVar4;
  bVar1 = *(byte *)CONCAT71(uVar6,cVar5);
  *(byte *)CONCAT71(uVar6,cVar5) = *(char *)CONCAT71(uVar6,cVar5) + bVar4;
  if (!CARRY1(bVar1,bVar4)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

