// Function: FUN_1404a5660
// Addr: 1404a5660
// Size: 1 bytes


/* WARNING: Instruction at (ram,0x0001404a5670) overlaps instruction at (ram,0x0001404a566f)
    */

void FUN_1404a5660(int *param_1,undefined8 param_2)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  char *in_RAX;
  byte *pbVar4;
  char cVar5;
  undefined2 uVar6;
  char unaff_BL;
  
  uVar6 = (undefined2)((ulonglong)param_2 >> 0x10);
  cVar5 = (char)((ulonglong)param_2 >> 8) + *in_RAX;
  *in_RAX = *in_RAX + (char)in_RAX;
  *param_1 = *param_1 + (int)param_1;
  puVar1 = (uint *)(CONCAT44((int)((ulonglong)param_2 >> 0x20),
                             CONCAT22(uVar6,CONCAT11(cVar5,(char)param_2))) + 5);
  *puVar1 = *puVar1 | CONCAT22(uVar6,CONCAT11(cVar5,(char)param_2));
  pbVar4 = (byte *)((longlong)param_1 + -1);
  iVar3 = (int)in_RAX;
  if (pbVar4 == (byte *)0x0 || *puVar1 == 0) {
    *pbVar4 = *pbVar4 ^ (byte)((ulonglong)in_RAX >> 8);
    iVar3 = iVar3 + -0x2bfafffe;
  }
  *(char *)((longlong)param_1 + -0x6bfff7b1) = *(char *)((longlong)param_1 + -0x6bfff7b1) + unaff_BL
  ;
  bVar2 = *pbVar4;
  *pbVar4 = *pbVar4 - 8;
  *(int *)(ulonglong)(iVar3 + 0x8509000) =
       (*(int *)(ulonglong)(iVar3 + 0x8509000) - (int)pbVar4) - (uint)(7 < bVar2);
  *pbVar4 = *pbVar4 + unaff_BL;
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

