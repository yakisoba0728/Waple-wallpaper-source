// Function: FUN_1404ac290
// Addr: 1404ac290
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404ac290(undefined8 param_1,uint param_2)

{
  byte bVar1;
  char cVar2;
  byte bVar3;
  uint in_EAX;
  int iVar4;
  uint uVar5;
  byte *pbVar6;
  undefined1 uVar7;
  char cVar8;
  undefined6 uVar9;
  undefined8 *puVar10;
  undefined8 *unaff_RBP;
  undefined8 *unaff_RSI;
  byte in_CF;
  byte bVar11;
  undefined8 in_MM1;
  undefined1 auStack_111 [257];
  undefined8 uStack_10;
  
  uVar9 = (undefined6)((ulonglong)param_1 >> 0x10);
  cVar8 = (char)((ulonglong)param_1 >> 8);
  uVar7 = (undefined1)param_1;
  pshufw(in_MM1,*unaff_RSI,0x60);
  bVar3 = (char)in_EAX * '\x02' + (CARRY4(param_2,in_EAX) || CARRY4(param_2 + in_EAX,(uint)in_CF)) |
          0x50;
  pbVar6 = (byte *)(unaff_RBP + 0xea002df);
  bVar11 = CARRY1(*pbVar6,bVar3);
  *pbVar6 = *pbVar6 + bVar3;
  pbVar6 = (byte *)func_0x000118b7c2c1(uVar7,param_2 + in_EAX + (uint)in_CF);
  bVar3 = *pbVar6;
  bVar1 = *pbVar6 - (byte)pbVar6;
  *pbVar6 = bVar1 - bVar11;
  puVar10 = (undefined8 *)&stack0xfffffffffffffff8;
  cVar2 = '\x1c';
  do {
    unaff_RBP = unaff_RBP + -1;
    puVar10 = puVar10 + -1;
    *puVar10 = *unaff_RBP;
    cVar2 = cVar2 + -1;
  } while ('\0' < cVar2);
  uVar5 = (uint)(bVar3 < (byte)pbVar6 || bVar1 < bVar11);
  iVar4 = (0xa84c001a - uRam00000000a84c001a) - uVar5;
  bVar3 = (char)iVar4 -
          (0xa84c001a < uRam00000000a84c001a || 0xa84c001a - uRam00000000a84c001a < uVar5);
  uVar5 = (CONCAT31((int3)(char)((uint)iVar4 >> 8),bVar3) + -0x1e783400) - (uint)(bVar3 < 0x88);
  *(char *)CONCAT62(uVar9,CONCAT11(cVar8,uVar7)) =
       *(char *)CONCAT62(uVar9,CONCAT11(cVar8,uVar7)) + cVar8;
  *(char *)CONCAT62(uVar9,CONCAT11(cVar8,uVar7)) =
       *(char *)CONCAT62(uVar9,CONCAT11(cVar8,uVar7)) + (char)auStack_111;
  *(int *)(ulonglong)uVar5 = *(int *)(ulonglong)uVar5 + uVar5;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

