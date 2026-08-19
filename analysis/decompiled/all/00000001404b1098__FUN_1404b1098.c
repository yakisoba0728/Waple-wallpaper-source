// Function: FUN_1404b1098
// Addr: 1404b1098
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b1098(char *param_1,undefined8 param_2)

{
  char *pcVar1;
  byte bVar2;
  uint uVar3;
  byte *in_RAX;
  byte bVar4;
  undefined6 uVar5;
  byte bVar6;
  char unaff_SPL;
  undefined1 *unaff_RSI;
  int *unaff_RDI;
  
  bVar6 = (byte)((ulonglong)param_2 >> 8);
  uVar5 = (undefined6)((ulonglong)param_1 >> 0x10);
  bVar4 = (byte)((ulonglong)param_1 >> 8);
  unaff_RSI[(longlong)in_RAX] = unaff_RSI[(longlong)in_RAX] + bVar6;
  bVar2 = *in_RAX;
  *in_RAX = *in_RAX + (byte)in_RAX;
  *unaff_RDI = (int)in_RAX;
  uVar3 = (int)in_RAX + 0x15ab3800 + (uint)CARRY1(bVar2,(byte)in_RAX);
  *(char *)((longlong)unaff_RDI + (longlong)(param_1 + 0x521004f)) =
       *(char *)((longlong)unaff_RDI + (longlong)(param_1 + 0x521004f)) + (char)uVar3;
  uVar3 = CONCAT31((int3)(uVar3 >> 8),(char)uVar3 + *(char *)(ulonglong)uVar3);
  uVar3 = CONCAT31((int3)(uVar3 + 0x40000c64 >> 8),*unaff_RSI) + 0x15aceb00 +
          (uint)(0xbffff39b < uVar3);
  pcVar1 = (char *)((ulonglong)uVar3 + 2);
  *pcVar1 = *pcVar1 + bVar4;
  *param_1 = *param_1 + unaff_SPL;
  *(char *)CONCAT62(uVar5,CONCAT11(bVar4 + bVar6,(char)param_1)) =
       *(char *)CONCAT62(uVar5,CONCAT11(bVar4 + bVar6,(char)param_1)) +
       (char)((CONCAT31((int3)(uVar3 + 0xc4050002 >> 8),unaff_RSI[1]) | 0x15aceb00) + 0x4b0fd800 +
              (uint)CARRY1(bVar4,bVar6) >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

