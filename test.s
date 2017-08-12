.globl main
main:
li $2, 0
sw $2, 0($29)
li $2, 1
sw $2, 4($29)
li $2, 2
sw $2, 8($29)
li $2, 3
sw $2, 12($29)
lw $2, 0($29)
bne $2,$0,L0
j L1
L0:
lw $3, 8($29)
lw $4, 12($29)
add $5, $3, $4
sw $5, 28($29)
lw $3, 28($29)
addi $2, $3, 0
addi $a0, $2, 0
li $v0, 1
syscall
li $a0, 10
li $v0, 11
syscall
jr $ra
L1:
lw $4, 4($29)
addi $2, $4, 0
addi $a0, $2, 0
li $v0, 1
syscall
li $a0, 10
li $v0, 11
syscall
jr $ra
# .exit main
