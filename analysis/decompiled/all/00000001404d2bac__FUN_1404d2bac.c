// Function: FUN_1404d2bac
// Addr: 1404d2bac
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d2bac(int *param_1,undefined8 param_2)

{
  byte bVar1;
  int iVar2;
  byte bVar3;
  undefined8 in_RAX;
  char *unaff_RBX;
  int unaff_ESI;
  longlong unaff_RDI;
  byte *pbVar4;
  
  *(char *)(param_1 + unaff_RDI) = (char)param_1[unaff_RDI] + (char)in_RAX;
  bVar3 = (char)in_RAX + 2;
  pbVar4 = (byte *)CONCAT71((int7)((ulonglong)in_RAX >> 8),bVar3);
  bVar1 = *pbVar4;
  *pbVar4 = *pbVar4 + bVar3;
  *(uint *)(unaff_RBX + (longlong)param_1) =
       (*(int *)(unaff_RBX + (longlong)param_1) - unaff_ESI) - (uint)CARRY1(bVar1,bVar3);
  *unaff_RBX = *unaff_RBX + (char)((ulonglong)in_RAX >> 8);
  iVar2 = (int)pbVar4 - *param_1;
  pbVar4 = (byte *)((ulonglong)
                    (CONCAT22((short)((uint)iVar2 >> 0x10),
                              CONCAT11((byte)((uint)iVar2 >> 8) | (byte)iVar2 | 0xf0,(byte)iVar2)) |
                    0xf0) + 7);
  *pbVar4 = *pbVar4 | (byte)((ulonglong)param_2 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

