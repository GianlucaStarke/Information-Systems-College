package com.mycompany.lista1;

/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author aluno
 */
public class Tamagushi {
    
    private int fome, saude, idade, humor;
    private String nome;
    
    public Tamagushi(String nome){
    
        setNome(nome);
        
        this.fome = 100;
        this.saude = 100;
        this.humor = 100;
        this.idade = 0;
    }
    
    private void calcularHumor(){
    
        this.humor = (this.fome + this.saude) / 2;
    }
    
    public void setNome(String nome){
    
        this.nome = nome;
    }
    
    public void setFome(int fome){
    
        this.fome = (
        
            fome > -1 && fome < 101
                ? fome
                : this.fome
        );
    }
    
    public void setSaude(int saude){
        
        this.saude = (
        
            saude > -1 && saude < 101
                ? saude
                : this.saude
        );
    }
    
    public void setIdade(int idade){
    
        this.idade = (
        
            idade > this.idade
                ? idade
                : this.idade
        );
    }
    
    public String getNome(){
    
        return this.nome;
    }
    
    public int getFome(){
    
        return this.fome;
    }
    
    public int getSaude(){
    
        return this.saude;
    }
    
    public int getIdade(){
    
        return this.idade;
    }
    
    public int getHumor(){
    
        calcularHumor();
        
        return this.humor;
    }
}
