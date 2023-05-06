FROM node:20-bullseye
WORKDIR /data
 
 
COPY . .
RUN chown -R node:node /data
USER node
RUN npm install
EXPOSE 3000
CMD ["npm", "run", "dev"]
